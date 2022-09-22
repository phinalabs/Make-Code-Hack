/*
 * Embedded C: Enum, Arrays, Structs and Function Pointers
 * @author muchirijohn
 */

#ifndef __HELPER__
#define __HELPER__


/*enum function type*/
typedef enum{
 ADD, SUBTRACT, MULTIPLY
}FUNC_TYPE_M;

/*values struct*/
typedef struct
{
	int x;
	int y;
} values_t;

/*function struct*/
typedef struct{
    FUNC_TYPE_M func_type;
    int (*func_caller)(values_t *);
}funcs_t;

/*addition*/
int funcAdd(values_t *val)
{
	return val->x + val->y;
}

/*substraction*/
int funcSub(values_t *val)
{
	return val->x - val->y;
}

/*multiply*/
int funcMultiply(values_t *val)
{
	return val->x * val->y;
}

#endif