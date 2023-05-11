#include <stdio.h>
#include <stdlib.h>
union super_int
{
    int i;
    unsigned int j;

};
int main() {
    union super_int x;
    x.i = -10;
    printf("x.i = %d\n", x.i);
    x.j = 10;
    printf("x.j = %u\n", x.j);
    return 0;
}
