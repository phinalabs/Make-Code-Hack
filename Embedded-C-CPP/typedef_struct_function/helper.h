/*
 * Embedded C: Structs and Function Pointers
 * @author muchirijohn
 */

#ifndef __HELPER__
#define __HELPER__

/*values struct*/
typedef struct
{
	int x;
	int y;
} values_t;

/*functions struct*/
typedef struct
{
	int (*addFunc)(values_t *);
	int (*subFunc)(values_t *);
	int (*multiplyFunc)(values_t *);
	float (*divFunc)(values_t *);
} funcs_t;

/*addition*/
int calcAdd(values_t *val)
{
	return val->x + val->y;
}

/*substraction*/
int calcSub(values_t *val)
{
	return val->x - val->y;
}
/*multiply*/
int calcMultiply(values_t *val)
{
	return val->x * val->y;
}
/*division*/
float calcDivision(values_t *val)
{
	return ((float)val->x / val->y);
}

#endif
