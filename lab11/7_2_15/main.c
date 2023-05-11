#include <stdio.h>
#include <stdlib.h>
enum zwierzak {PIES=-4, KOT, KURA, KOGUT};
int main()
{
    enum zwierzak cat = KOT;
    printf("%d\n",cat);
    return 0;
}
