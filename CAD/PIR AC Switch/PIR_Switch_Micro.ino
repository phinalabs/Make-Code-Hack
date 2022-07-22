/*
   Automatic PIR Controlled Light Switch
   @author MuchiriJohn
   (c) 2022 Phinalabs
*/

//#define DEBUG //uncomment/comment to enable/disable serial debug

#define ON 1
#define OFF 0

#define RELAY 6 //relay pin
#define PIR 16 //PIR sensor pin

uint8_t state = 0; //relay on/off
uint8_t sense = 0; //PIR sensor value

unsigned long cur_time = 0; //current time (millis)
unsigned long prev_time = 0; //previuos time (millis)
uint16_t counter = 0; //counter
uint16_t counter_period = 1000; //counter tick
uint16_t timeout = 300; //timeout in seconds

void setup() {
#ifdef DEBUG
  //serial at baud 115200
  Serial.begin(115200);
  //delay to let the mcu serial init
  delay(3000);
  Serial.println("Automatic PIR Controlled Light Switch");
#endif
  //set relay pin as output
  pinMode(RELAY, OUTPUT);
  //set pir sensor input pin as input
  pinMode(PIR, INPUT);
  //set relay off
  digitalWrite(RELAY, OFF);
}

void loop() {
  if (state == 0) { //relay off state
    //get pir reading
    sense = digitalRead(PIR);
    if (sense == HIGH) {
      //set relay on
      digitalWrite(RELAY, ON);
      prev_time = millis();
      state = 1; //set state
#ifdef DEBUG
      Serial.println("RELAY ON");
#endif
    }
  } else { //relay on state
    cur_time = millis();
    if ((cur_time - prev_time) >= counter_period) {
      counter++;
      prev_time = millis();
#ifdef DEBUG
      Serial.print("Counter(s) : ");
      Serial.println(counter);
#endif
    }
    //check if counter elapsed to auto turn off relay
    if (counter >= timeout) {
      digitalWrite(RELAY, OFF); //set relay off
      state = 0; //reset state
      counter = 0; //reset counter
#ifdef DEBUG
      Serial.println("RELAY OFF");
#endif
    }
  }
  //yield
  delay(1);
}
