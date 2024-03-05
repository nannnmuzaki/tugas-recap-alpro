#include <stdio.h>

int jumlahTransaksi;
int nominal;
int totalPengeluaran = 0;

int main() {
    printf("masukkan jumlah transaksi pada hari ini: ");
    scanf("%d", &jumlahTransaksi);
    if(jumlahTransaksi <= 0) {
        printf("Tidak ada transaksi hari ini");
    }
    else {
        int i = 1;
        while (i <= jumlahTransaksi)
        {
            printf("nominal transaksi ke-%d: ", i);
            scanf("%d", &nominal);
            totalPengeluaran = totalPengeluaran + nominal;
            i++;    
        }

        printf("\nTotal pengeluaran hari ini: %d", totalPengeluaran);
    }

    return 0;
}