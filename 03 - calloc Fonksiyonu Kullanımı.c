// calloc() fonksiyonu kullanımı

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Dinamik Bellek Yönetimi için gerekli olan Fonksiyonları içeren kütüphane

int main()
{
    setlocale(LC_ALL, "tr_TR.UTF-8");
    int n, i, *isaretci, toplam = 0;

    printf("Toplanacak eleman sayısını giriniz: ");
    scanf("%d", &n);

    isaretci = (int *)calloc(n, sizeof(int));
    // malloc ile tek fark yukarıda calloc kullanılmış olmasıdır.

    // bellek ayırma (tahsis) işleminin başarısız olma durumunda
    if (isaretci == NULL)
    {
        printf("Hata! Bellek ayrıma işlemi başarısız oldu!");
        exit(0);
    }
    // Yukarıdaki 4 satır. Tüm Dinamik Bellek Yönetimi kodlamalarında muhakkak olmalıdır.
    printf("Toplanacak elemanları giriniz: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", isaretci + i);
        toplam += *(isaretci + i);
    }

    printf("Toplam = %d", toplam);

    // Ayrılmış (tahsis edilmiş) belleği serbest bırak
    free(isaretci);

    return 0;
}
