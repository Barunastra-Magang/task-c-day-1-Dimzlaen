#include <stdio.h>

//Soal 1
// Fungsi rekursif faktorial
int f(int n) {
    if (n == 0)
        return 1;      // kondisi berhenti
    return n * f(n-1); // memanggil diri sendiri
}

//Soal 2
// Deret 1, 5, 14, 30, ...
int d(int n) {
    if (n == 1)
        return 1;
    return d(n-1) + n*n ;
}

//Soal 3
// Mencari nilai max dan min array
void mm(int a[], int n) {
    int max = a[0];
    int min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("max: %d, min: %d\n", max, min);
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));

    int k;
    scanf("%d", &k);
    printf("%d\n", d(k));

    int m;
    scanf("%d", &m);

    int a[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    mm(a, m);

    return 0;
}