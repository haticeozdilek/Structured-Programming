#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("1 - Oyuna basla->(1)\n2 - Oyunu Bitir -> (-1)\n\n");
    printf("Secim: ");
}
void oyunaBasla()
{
    int tahmin;
    int sayi = 12;
    printf("\nOyun baslatildi..");
    printf("Sayiyi tahmin ediniz: ");

    do
    {
        scanf("%d",&tahmin);
        if( tahmin > sayi)
            printf("Daha kucuk bir sayi gir: ");
        else if(tahmin < sayi)
            printf("Daha buyuk bir sayi gir: ");
        else
            printf("\nSayiyi dogru tahmin ettin ");
    }
    while(tahmin != sayi);
}
int main()
{
    int secim;
    do
    {
        menu();
        scanf("%d",&secim);

        switch(secim)
        {
            case 1: oyunaBasla(); break;

            case -1:printf("\nOyun bitiriliyor"); break;

            default:printf("Hatali giris yaptiniz.."); break;

        }
    }
    while(secim != -1);

    return 0;
}

