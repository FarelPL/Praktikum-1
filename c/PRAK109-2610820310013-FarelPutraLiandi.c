#include <stdio.h>

int main() {
    int m = 958730, jp, perp;

    char *p[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"};

    jp = sizeof(p) / sizeof(p[0]);

    perp = m / jp;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", m);
    printf("Jumlah pahlawan = %d\n", jp);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", perp);

    return 0;
}