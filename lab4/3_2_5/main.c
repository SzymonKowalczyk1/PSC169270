#include <stdio.h>
#include <stdlib.h>
int fun (int*x, int*y)
{
    return *x + *y;

}
int main()
{
    int x = 9, y = 2;
    printf("%i\n",fun (&x,&y));
    return 0;
}
