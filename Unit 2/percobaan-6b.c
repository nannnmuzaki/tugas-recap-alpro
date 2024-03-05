#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}

// Program tersebut menggunakan perulangan do-while bersarang untuk melakukan iterasi atau perulangan

// Program ini memberikan output yang menunjukkan hasil perkalian antara bilangan utama dan bilangan pengali.

// Pada perulangan pertama, variabel i digunakan untuk mengiterasi nilai dari 2 hingga 3. Setiap iterasi dari i, program mencetak pesan "Bilangan utama: " diikuti dengan nilai i

// Di dalam perulangan pertama, perulangan kedua menggunakan variabel j untuk mengiterasi nilai dari 1 hingga 2. Setiap iterasi dari j, program mencetak pesan "Bilangan pengali: " diikuti dengan nilai j. Kemudian program mencetak hasil perkalian antara i dan j dengan pesan "Hasil perkalian: "

// Kedua perulangan tersebut dilakukan secara berulang sampai kondisinya sudah tidak memenuhi lagi

// Output yang dihasilkan
// Bilangan utama: 2
//  Bilangan pengali: 1
//   Hasil perkalian: 2

//  Bilangan pengali: 2
//   Hasil perkalian: 4

// Bilangan utama: 3
//  Bilangan pengali: 1
//   Hasil perkalian: 3

//  Bilangan pengali: 2
//   Hasil perkalian: 6

// Perbedaan antara perulangan do-while dan while terletak pada urutan evaluasi kondisi. Dalam perulangan while, kondisi dievaluasi terlebih dahulu sedangkan dalam perulangan do-while, blok pernyataan dieksekusi terlebih dahulu, dan kondisi dievaluasi setelahnya. Dengan kata lain, dalam perulangan do-while, setidaknya satu iterasi dari blok pernyataan akan dieksekusi sebelum kondisi dievaluasi untuk pertama kalinya