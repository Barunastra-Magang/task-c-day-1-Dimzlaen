#include <stdio.h>

int main() {

    //Soal 1
    // Menghitung umur dari tahun lahir dan tahun sekarang
    int a, b, c;
    scanf("%d %d", &a, &b);

    // Umur = tahun sekarang - tahun lahir
    c = b - a;
    printf("%d\n", c);

    //Soal 2
    // Membagi pizza ke teman dan menghitung sisa
    int p, n;
    scanf("%d %d", &p, &n);

    int bagi = p / n;   // hasil bagi ke tiap teman
    int sisa = p % n;   // sisa pizza

    printf("Teman mendapat %d potong, Ghifari mendapat %d potong\n",
           bagi, sisa);

    //Soal 3
    // Menghitung (a+b)/c dengan 2 angka desimal
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);

    float h = (x + y) / z;
    printf("%.2f\n", h);

    //Soal 4
    // Menghitung jumlah dan rata-rata 5 bilangan
    int i1, i2, i3, i4, i5;
    scanf("%d %d %d %d %d", &i1, &i2, &i3, &i4, &i5);

    int j = i1 + i2 + i3 + i4 + i5;
    float r = j / 5.0;

    printf("%d %.1f\n", j, r);

    return 0;
}