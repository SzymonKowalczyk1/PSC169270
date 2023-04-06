#include <stdio.h>
#include <stdlib.h>
void f (double * tab)
{
    free(tab);

}
int main()
{
    printf("Hello world!\n");
    return 0;
}
