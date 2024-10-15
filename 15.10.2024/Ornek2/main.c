#include <stdio.h>
#include <stdlib.h>

int main()
{
    char isim[10];
    char soyisim[10];
    int yas;

    printf("|--------------------|ORNEK 2|--------------------|\n\n\n");

    printf("Isim Giriniz : ");
    scanf("%s",&isim);

    printf("Soyisim Giriniz : ");
    scanf("%s",&soyisim);

    printf("Yas Giriniz : ");
    scanf("%d",&yas);

    if(yas > 18)
    {
        printf("\n\n%s isimli %s soyisimli kisi ehliyet alabilir.\n\n\n",isim,soyisim);
    }
    else
    {
        printf("\n\n%s isimli %s soyisimli kisi ehliyet alamaz.\n\n\n",isim,soyisim);
    }

/*
    if(yas > 18) printf("\n\n%s isimli %s soyisimli kisi ehliyet alabilir.\n\n\n",isim,soyisim);
    else printf("\n\n%s isimli %s soyisimli kisi ehliyet alamaz.\n\n\n",isim,soyisim);
*/
    return 0;
}
