#include <stdio.h>
#include <stdlib.h>
struct punkt
{
    double x;
    double y;
    double z;
};
void przepisz(struct punkt tab1[],struct punkt tab2[],int n)
{
    for(int i = 0; i < n; i++)
    {
        tab2[i]=tab1[i];
    }
}
int main()
{
    struct punkt tab1[3] ={{1,2,3},{4,5,6},{3,4,2}};
    struct punkt tab2[3];
    przepisz(tab1,tab2,3);
    for (int i = 0; i < 3; i++)
    {
        printf("tab2[%d] = {%f, %f, %f}\n", i, tab2[i].x, tab2[i].y, tab2[i].z);
    }
    return 0;
}
