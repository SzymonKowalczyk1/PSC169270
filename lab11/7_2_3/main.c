#include <stdio.h>
#include <stdlib.h>
struct punkt
{
    double x;
    double y;
    double z;
};
double min_odleglosc(struct punkt tab[], int n)
{
    float min =sqrt(((tab[2].x-tab[1].x)*(tab[2].x-tab[1].x))+((tab[2].y-tab[1].y)*(tab[2].y-tab[1].y))+((tab[2].z-tab[1].z)*(tab[2].z-tab[1].z)));
    float temp = 0;
    for (int i = 0; i<n-1; i++)
    {
        for (int j = 0; j<n;j++)
        {
           temp=sqrt(((tab[j].x-tab[i].x)*(tab[j].x-tab[i].x))+((tab[j].y-tab[i].y)*(tab[j].y-tab[i].y))+((tab[j].z-tab[i].z)*(tab[j].z-tab[i].z)));
        }
        if(temp < min)
        {
            min = temp;
        }
    }
    return min;
}
int main()
{
    struct punkt tab[4] = {{1,2,3},{4,5,6},{3,4,2},{2,4,6}};
    printf("%f\n",min_odleglosc(tab,4));
    return 0;
}
