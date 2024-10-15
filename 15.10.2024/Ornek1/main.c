#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("|--------------------|ORNEK 1|--------------------|\n\n\n");
    float Vize,Final,Ortalama;

    printf("Ogrencinin Vize Notu : ");
    scanf("%f",&Vize);

    printf("Ogrencinin Final Notu : ");
    scanf("%f",&Final);

    Ortalama = (Final+Vize)/2;

    printf("\n\nOgrencinin Ortalamasi : %.2f\n\n\n",Ortalama);
    return 0;
}
