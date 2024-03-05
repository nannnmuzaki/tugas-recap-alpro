#include <stdio.h>

void kelilingPersegi(int sisi) {
    int kelilingPersegi = sisi + sisi;
    printf("Keliling Persegi: %d\n", kelilingPersegi);
}

void luasPersegi(int sisi) {
    int luasPersegi = sisi * sisi;
    printf("Luas Persegi: %d\n", luasPersegi);
}

void volumePersegi(int sisi) {
    int volumePersegi = sisi * sisi * sisi;
    printf("Volume Persegi: %d", volumePersegi);
}

int main() {
    int sisi;

    printf("Masukkan panjang sisi: ");
    scanf("%d", &sisi);
    
    kelilingPersegi(sisi);
    luasPersegi(sisi);
    volumePersegi(sisi);

    return 0;
}