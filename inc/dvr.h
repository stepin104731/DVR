/**
* @file factorial.h
*
*/
#ifndef __FACTORIAL_H__
#define __FACTORIAL_H__

/**
* Calculates the factorial of integer number
* @param[in] number for which factorial has to be found
* @return Factorial of the number
* @note Returns -1 for negative values
*/
typedef struct
{
    int V[20];
    int rp;
    int fp;
    int counter;
}QUE;
QUE p1,p2,p3,p4,p5;

int v,i,p,f,z,j,k;
int checkv(int t);

#endif /* #ifndef __FACTORIAL_H__ */
