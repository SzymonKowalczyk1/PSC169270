#include <stdio.h>
#include <stdlib.h>

int silnia (int n) {

int s = 1;
for (int i = 2; i <= n; i++){
    s *= i;
}
    return s;
}


int main()
{
int n;
printf("Podaj n: ");
scanf("%i",&n);
printf("Silnia n to: %d\n",silnia(n));




    return 0;
}
