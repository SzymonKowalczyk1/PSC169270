#include <stdio.h>

int NWD (int n, int m)
{
    if (m != 0) {
        return NWD(m, n % m);
    }
    return n;
}

int main() {
    int n, m,wynik;
    printf("Podaj n i m: ");
    scanf("%d %d", &n, &m);
    wynik = NWD(n, m);
    printf("NWD: %d\n", wynik);
    return 0;
}
