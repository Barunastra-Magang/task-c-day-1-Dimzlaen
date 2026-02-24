#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    //Soal 1
    // Menentukan ganjil atau genap
    int a;
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("Genap\n");
    else
        printf("Ganjil\n");

    //Soal 2
    // Cetak '*' untuk genap, angka untuk ganjil
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            printf("* ");
        else
            printf("%d ", i);
    }
    printf("\n");

    //Soal 3
    // Cetak '*' untuk bilangan prima
    int m;
    scanf("%d", &m);

    for (int i = 2; i <= m; i++) {
        int f = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                f = 0;
                break;
            }
        }
        if (f)
            printf("* ");
        else
            printf("%d ", i);
    }
    printf("\n");

    //Soal 4
    // Membalik urutan array
    int k;
    scanf("%d", &k);

    int arr[k];
    for (int i = 0; i < k; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = k - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //Soal 5
    // Menghitung jumlah vokal
    char s[100];
    scanf("%s", s);

    int a1=0,i1=0,u1=0,e1=0,o1=0;
    for (int i = 0; s[i]; i++) {
        char c = tolower(s[i]);
        if (c=='a') a1++;
        else if (c=='i') i1++;
        else if (c=='u') u1++;
        else if (c=='e') e1++;
        else if (c=='o') o1++;
    }

    printf("A:%d I:%d U:%d E:%d O:%d\n", a1,i1,u1,e1,o1);

    //Soal 6
    // Snake_case ke camelCase
    char s1[100], s2[100];
    scanf("%s", s1);

    int x = 0;
    for (int i = 0; s1[i]; i++) {
        if (s1[i] == '_') {
            i++;
            s2[x++] = toupper(s1[i]);
        } else {
            s2[x++] = s1[i];
        }
    }
    s2[x] = '\0';

    printf("%s\n", s2);

    return 0;
}