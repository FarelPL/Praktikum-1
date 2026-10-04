#include <stdio.h>

int main() {
    int  a = 5,b = 14;

    float jawab = ((float)b / a / (2 * 3.14));

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", a);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", b);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jawab);

    return 0;
}