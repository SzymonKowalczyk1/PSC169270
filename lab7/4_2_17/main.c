#include <stdio.h>
#include <stdlib.h>
double * plytka_kopia (int n, double * tab)
{
    return tab;

}

double * gleboka_kopia (int n, double * tab)
{
    double * newtab = malloc(n* sizeof(double));

    if(newtab == NULL)
        return NULL;
    for (int i = 0; i<n; i++){
        *(newtab +i) = *(tab+i);
    }
    return newtab;

}
void wyswietl (int n, double *tab)
{
    for (int i = 0; i < n; i++){
        printf("%lf\n", *(tab+i));
    }
    printf("--\n");


}
int main()
{
    double tab[] = {2.2,4.4,-3.2,8.0};
    wyswietl(4, tab);
    double * tab2 = plytka_kopia(4,tab);
    wyswietl(4, tab2);
    double taba[] = {2.2,4.4,-3.2,8.0};
    wyswietl(4, tab2);
    double * tab3 = plytka_kopia(4,taba);
    return 0;
}
