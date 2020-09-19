#include "test_factorial.h"
#include "factorial.h"
#include<stdio.h>
#include<string.h>
#define MAX 20


  int checki(int t)
{
    in(&p2,t);
    if(t==139)
       {
        return(0);
        }
        else if(t>139)
        {
        return(1);
        }
        else if (t<139)
        {
        return(-1);
        }
}

int checkp(int t)
{
    in(&p4,t);
    if(t==10000)
       {
        return(0);
        }
        else if(t>10000)
        {
        return(1);
        }
        else if (t<10000)
        {
        return(-1);
        }
}
int checkz(int i,int v)
{
    if(i==0)
        return(-9);
    int z = v/i;
    in(&p5,z);
    if(z==2)
       {
        return(0);
        }
        else if(z>2)
        {
        return(1);
        }
        else if (z<2)
        {
        return(-1);
        }
}
char* regulation(int t)
{
    char *p;
    if((t-220)==0)
    {
        p="same\n";
        return(p);
    }
    else if((t-220)<0)
    {
        p="sag\n";
        return(p);
    }
    else if((t-220)>0)
    {
        p="swell\n";
        return(p);
    }
}
char* stability(void)
{
    if(i==1)
    {
     p="unstable\n";
     return(p);
    }
    else if(j==1)
    {
    p="unstable\n";
    return(p);
    }
    else if(k==1)
    {
     p="unstable\n";
     return(p);
    }
    else
    {
        p="stable\n";
        return(p);
    }
}
int out(QUE *arg )
{
    int element;
    element = arg->V[ arg->fp];
    arg->fp++;
    arg->fp = arg->fp % MAX;
    arg->counter--;
    return element;
}

void display( QUE arg )
{
    int i , j;
    j = arg.fp;
    for( i=1; i<=arg.counter; i++)
    {
        printf("[%d]\t", arg.V [ j ]);
        j++;
        j = j % MAX;
    }
}

void in( QUE *arg , int id )
{
    if( arg->counter == MAX )
        printf("Ur requested can't be processed now...\n");
    else
    {
        arg->V [ arg->rp] = id;
        arg->rp = arg->rp+1;
        arg->rp = arg->rp % MAX;
        arg->counter++;
}
}
int last(QUE *arg )
{
    int element;
    element = arg->V[ arg->fp];
    arg->fp++;
    arg->fp = arg->fp % MAX;
    arg->counter--;
    return element;
}
int show(QUE *arg,int id)
{
    int i=arg->V[id-1];
    return(i);
}
int max(QUE *arg)
{
    int i=arg->V[arg->fp];
    int k=arg->rp;
    int j=arg->fp;
    while(j!=k)
    {
    if(arg->V[j]>i)
    i=arg->V[j];
    j++;
    }
    return(i);
}

int min(QUE *arg)
{
    int i=arg->V[arg->fp];
    int k=arg->rp;
    int j=arg->fp;
    while(j!=k)
    {
    if(arg->V[j]<i)
    i=arg->V[j];
    j++;
    }
    return(i);
}
int frequency(int t)
{
    in(&p3,t);
    if(t>50)
    {
        f=1;
        return(f);
    }
    else if(t<50)
    {
        f=-1;
        return(f);
    }
    else
    {
        f=0;
        return(f);
    }
}
char* control(int v)
{
    int t=230-v;
    printf("%d\n",t);
    if(t<=23&&t>0)
    {
        p="controllable";
         return(p);
    }
    else if(t>0 && t>23)
        {
            p="uncontrollable";
             return(p);
        }
    if(t<0 && t>-23)
    {
        p="controllable";
        return(p);
    }
    else
    {
        p="uncontrollable";
        return(p);
    }
}

int main(void)
{
	test_main();
	return(0);
}
