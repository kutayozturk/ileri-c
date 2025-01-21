// calloc() fonksiyonu kullanımı

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Dinamik Bellek Yönetimi için gerekli olan Fonksiyonları içeren kütüphane

int main()
{
    setlocale(LC_ALL, "tr_TR.UTF-8");

    int *isaretci, i, n1, n2;
    printf("Boyut Giriniz: ");
    scanf("%d", &n1);

    isaretci = (int *)malloc(n1 * sizeof(int));

    // bellek ayırma (tahsis) işleminin başarısız olma durumunda
    if (isaretci == NULL)
    {
        printf("Hata! Bellek ayrıma işlemi başarısız oldu!");
        exit(0);
    }

    printf("Ayrılan (Tahsis Edilen) İlk Bellek Adresleri:\n");
    for (i = 0; i < n1; ++i)
    {
        printf("%pc\n", isaretci + i);
    }

    printf("Yeni Boyut Giriniz: ");
    scanf("%d", &n2);

    // Yeniden bellek ayırma (Tahsis Etme) işlemi
    isaretci = realloc(isaretci, n2 * sizeof(int));

    printf("Ayrılan (Tahsis Edilen) Yeni Bellek Adresleri:\n");
    for (i = 0; i < n2; ++i)
    {
        printf("%pc\n", isaretci + i); // "%pc": 16'lık sayı sisteminde Hexadecimal yazdırmak için 0x ile başlama durumu
    }

    free(isaretci);
    return 0;
}
