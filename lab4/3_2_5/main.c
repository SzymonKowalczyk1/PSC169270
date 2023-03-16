#include <stdio.h>
#include <stdlib.h>
int fun (int const*x, int const*y)
{
    return *x + *y;

}
int main()
{
    int x = 9, y = 2;
    printf("%i\n",fun (&x,&y));
    return 0;
}
