#include <stdio.h>

int main() {
    int suhu;
    char lagi;

    do {
        printf("Masukkan suhu (C): ");
        scanf("%d", &suhu);

        if (suhu < 20) {
            printf("dinginn brrrr.. \n");
        } else if (suhu <= 30) {
            printf("suhu normal kok. \n");
        } else {
            printf("panass tolongg!! \n");
        }

        printf("Masukkan suhu lagi? (y/n): ");
        scanf(" %c", &lagi);
    } while (lagi == 'y' || lagi == 'Y');

    printf("Cek suhu selesai yay!\n");
    return 0;
}