#include <stdio.h>
#include <stdlib.h>

int* foo(int n, int tab1[]){
    int nzero = 0;
    for(int i = 0; i < n; i++){
        if(tab1[i]!=0){
            nzero++;
        }
    }
    int*tab2= malloc(nzero*sizeof(int));
    int j=0;
    for(int i=0;i<n;i++){
        if(tab1[i]!=0){
            tab2[j]=tab1[i];
            j++;
        }
    }
    return tab2;
}
void wyswietl(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("[i]=%d\n",tab[i]);
    }
}
int main()
{
    int n=7;
    int tab1[]={8,0,2,0,5,0,7};
    int*tab2=foo(n,tab1);
    printf("Tab2:\n");
    wyswietl(4,tab2);

}
