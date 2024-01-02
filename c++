#include <stdio.h>
int fonksiyon(int a, int b) {
    int sonuc = 0;
    printf("Sonuc_a=%d\n", a);
    printf("Sonuc_b=%d\n", b);
    sonuc = a + b;
    printf("Fonkiyon sonuc=%d\n", sonuc);
    return sonuc;
}

int main() {
    int sayi1, sayi2, sonuc1 = 0, sonuc2 = 0;
    printf("Klavyeden ilk Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
    printf("Klavyeden ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);

    sonuc1 = fonksiyon(sayi1, sayi2);

    printf("Sonuc%d", sonuc1);

}
