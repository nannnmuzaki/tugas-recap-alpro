#include <stdio.h>

int main() {
    int jarak, waktu, kecepatan;

    printf("input jarak dan waktu: ");
    scanf("%d %d", &jarak, &waktu);
    float v = (float) jarak / waktu;

    printf("input kecepatan dan waktu: ");
    scanf("%d %d", &kecepatan, &waktu);
    float s = (float) kecepatan * waktu;

    printf("input jarak dan kecepatan: ");
    scanf("%d %d", &jarak, &kecepatan);
    float t = (float) jarak / kecepatan;

    printf("v = %.2f\n", v);
    printf("s = %.2f\n", s);
    printf("t = %.2f\n", t);

    return 0;
}