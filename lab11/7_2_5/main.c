#include <stdio.h>
#include <stdlib.h>
struct punkt10
{
    double punkt[10];
};
void foo(struct punkt10 tab1[],struct punkt10 tab2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}
void wyswietl(struct punkt10 tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]: ", i);
        for(int j=0;j<10;j++)
        {
            printf("%f ", tab[i].punkt[j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    struct punkt10 tab[] =
    {
        {.punkt={3,4,5}},
        {.punkt={-2,-8}},
        {.punkt={1,2,3,4,5,6,7,8,9,10}},
        {.punkt={39, 11}}
    };
    struct punkt10 tab2[] =
    {
        {{9,6}},{{7}},{{-4,-4,5,-5}},{{-2,-8}}
    };
    wyswietl(tab,4);
    wyswietl(tab2,4);
    foo(tab,tab2,4);
    wyswietl(tab,4);
    wyswietl(tab2,4);
    return 0;
}
