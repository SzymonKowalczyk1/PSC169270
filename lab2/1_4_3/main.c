#include <stdio.h>

int main()
{
	int n,m,k,temp;
	printf("Podaj n: ");
	scanf ("%i", &n);
	printf("Podaj m: ");
	scanf ("%i", &m);
	printf("Podaj k: ");
	scanf ("%i", &k);
	temp = n;
	while (temp > k){
        printf ("%i \n", temp);
        temp = temp - m;
	}

	return 0;
}
