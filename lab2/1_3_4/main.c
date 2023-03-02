#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a;
    int b;
    printf("Podaj a: ");
    scanf("%i", &a);
    printf("Podaj b: ");
    scanf("%i", &b);
    int t1=a;
    if (a<0){
        t1= -a;
    }
    int t2 = b;
    if (b<0){
        t2 = -b;
    }

    if (t1 > t2){
        printf("%d", a);
    }
    else if(t1<t2) {
        printf("%d", b);
    }
    else {
        printf("Liczba a i b sa rowne");
    }


    return 0;
}
