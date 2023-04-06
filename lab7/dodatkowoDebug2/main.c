#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    if (*a>*b)
        return *a;
    return *b;
}

int main()
{
    int tab[] = {2,3,-1,-1,5,-8,3,4,-2,2,9,8};
    int *wsk=tab-1;
    int b = *(wsk+=3); //b=-1
    int c = b+1; // b= -1 , c= 0
    int d = foo(&b,&c); // b= -1 , c=0  , d=0
    int e = (wsk+=1)[2]; // b= -1 , c=0  , d=0  , e=-8
    c = d + (b+=3); // b= 2 , c= 2, d=0  , e=-8
    e = (d *= 3) + (c /= 3); // b=2  , c= 0 , d= 0 , e=0
    b = (c += -2) + (e -= 3); // b= -5 , c=-2  , d=0  , e=-3
    b = *wsk + e; // b=-4  , c=-2  , d=0  , e=-3
    return 0;
}
