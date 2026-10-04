#include <stdio.h>
#include <math.h>

int main() {
    int c = 5, a = 12, b, jawab1, jawab2;

    b = sqrt((c * c) + (a * a));
    jawab1 = a + b + c;
    jawab2 = (a * c) / 2;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", a);
    printf("Sisi B = %d cm\n", b);
    printf("Sisi C = %d cm\n", c);
    printf("Keliling = %d cm\n", jawab1);
    printf("Luas = %d cm\n", jawab2);

    return 0;
}