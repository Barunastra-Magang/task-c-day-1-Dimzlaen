#include <stdio.h>

//Soal 1
// Mengecek apakah bilangan merupakan Armstrong (0–999)
int main() {

    int a, b, c, d = 0;
    scanf("%d", &a);

    b = a;
    while (b > 0) {
        c = b % 10;          // ambil digit terakhir
        d = d + c*c*c;       // jumlahkan pangkat tiga digit
        b = b / 10;          // buang digit terakhir
    }

    if (d == a)
        printf("Merupakan Bilangan Armstrong\n");
    else
        printf("Bukan Bilangan Armstrong\n");


    //Soal 2
    // Menampilkan angka dalam bentuk terbilang sederhana (0–999)
    int x;
    scanf("%d", &x);

    int r = x / 100;         // ratusan
    int p = (x / 10) % 10;   // puluhan
    int s = x % 10;          // satuan

    if (r > 0) printf("%d ratus ", r);
    if (p > 0) printf("%d puluh ", p);
    if (s > 0) printf("%d", s);
    printf("\n");


    //Soal 3
    // 7-segment display
    // Input 4-bit biner (I1 I2 I3 I4)
    int i1, i2, i3, i4;
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    // Konversi biner ke desimal
    int n = (i1 << 3) | (i2 << 2) | (i3 << 1) | i4;

    int A, B, C, D, E, F, G;

    switch (n) {
        case 0: A=1; B=1; C=1; D=1; E=1; F=1; G=0; break;
        case 1: A=0; B=1; C=1; D=0; E=0; F=0; G=0; break;
        case 2: A=1; B=1; C=0; D=1; E=1; F=0; G=1; break;
        case 3: A=1; B=1; C=1; D=1; E=0; F=0; G=1; break;
        case 4: A=0; B=1; C=1; D=0; E=0; F=1; G=1; break;
        case 5: A=1; B=0; C=1; D=1; E=0; F=1; G=1; break;
        case 6: A=1; B=0; C=1; D=1; E=1; F=1; G=1; break;
        case 7: A=1; B=1; C=1; D=0; E=0; F=0; G=0; break;
        case 8: A=1; B=1; C=1; D=1; E=1; F=1; G=1; break;
        case 9: A=1; B=1; C=1; D=1; E=0; F=1; G=1; break;
        default:
            A=0; B=0; C=0; D=0; E=0; F=0; G=0;
    }

    printf("%d %d %d %d %d %d %d\n", A, B, C, D, E, F, G);

    return 0;
}