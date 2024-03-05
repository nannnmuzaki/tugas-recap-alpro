#include <stdio.h>

int main() {
    int jumlahElemen, totalJumlah = 0;
    int elemen[jumlahElemen];

    printf("masukkan jumlah elemen: ");
    scanf("%d", &jumlahElemen);

    for (int i = 0; i < jumlahElemen; i++)
    {
        printf("elemen ke-%d :", i+1);
        scanf("%d", &elemen[i]);
        totalJumlah = totalJumlah + elemen[i];
    }

    printf("Total jumlah nilai semua elemen: %d", totalJumlah);
    
}