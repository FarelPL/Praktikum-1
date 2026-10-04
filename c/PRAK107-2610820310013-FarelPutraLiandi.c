#include <stdio.h>

int main() {

    int a = 4 ,b = 5 ,c = 7, r=85000, keliling,jawab;

    keliling = a + b + c;
    jawab = keliling*r;

    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d  \n",a,b,c);
    printf("Keliling Tanah Pak Dengklek adalah %d \n",keliling);
    printf("Harga tanah Per Meter adalah %d \n",r);
    printf("Jawaban : \n");    
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", jawab);      
    return 0;
}