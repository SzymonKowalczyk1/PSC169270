#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf ("Podaj n: ");
    scanf("%i", &n);
    printf ("Podaj m: ");
    scanf("%i", &m);
    while(n!=m) {
        if (n > m) {
            n = n - m;
        }
        else {
            m = m - n;
        }
    }
    printf ("NWD: %i",n);


    return 0;
}
