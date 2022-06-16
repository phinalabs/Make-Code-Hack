#include <stdio.h>
#include <string.h>

int main () {
	
	char s1[12] = "Muchiri";
	char s2[12] = "John";
	char s3[12];
	int  len ;
	
	//copy s1 to s3
	strcpy(s3, s1);
	printf("copy s1 to s3 %s\n", s3 );
	
	//join s1 and s2
	strcat( s1, s2);
	printf("join s1 and s2 %s\n", s1);
	
	//s1 length
	len = strlen(s1);
	printf("s1 length :  %d\n", len );
	
	return 0;
}
