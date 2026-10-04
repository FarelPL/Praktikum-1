#include <stdio.h>

int main() {
    float a = 400000, b = 350000, hasil1, hasil2;

    hasil1 = a - (a * 13 / 100);
    hasil2 = b - (b * 21 / 100);

    printf("Harga sepatu A adalah %.0f\n", a);
    printf("Harga sepatu B adalah %.0f\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", hasil1);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", hasil2);

    return 0;
}