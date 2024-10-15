#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("|------------------|ORNEK 3|--------------------|\n\n\n");

    int sayi1, sayi2, sayi3;
    printf("1. Sayiyi Giriniz : ");
    scanf("%d",&sayi1);

    printf("2. Sayiyi Giriniz : ");
    scanf("%d",&sayi2);

    printf("3. Sayiyi Giriniz : ");
    scanf("%d",&sayi3);

    int buyuk,orta,kucuk;

    if(sayi1 > sayi2 && sayi1 > sayi3)
    {
        buyuk = sayi1;
        if(sayi2 > sayi3)
        {
            orta = sayi2;
            kucuk = sayi3;
        }
        else
        {
            orta = sayi3;
            kucuk = sayi2;
        }
    }
    else if(sayi2 > sayi1 && sayi2 > sayi3)
    {
        buyuk = sayi2;
        if(sayi1 > sayi3)
        {
            orta = sayi1;
            kucuk = sayi3;
        }
        else
        {
            orta = sayi3;
            kucuk = sayi1;
        }
    }
    else
    {
        buyuk = sayi3;
        if(sayi1 > sayi2)
        {
            orta = sayi1;
            kucuk = sayi2;
        }
        else
        {
            orta = sayi2;
            kucuk = sayi1;
        }
    }

    printf("\n\nBuyuk Sayi : %d | Orta Sayi : %d | Kucuk Sayi : %d\n\n",buyuk,orta,kucuk);
    return 0;
}
