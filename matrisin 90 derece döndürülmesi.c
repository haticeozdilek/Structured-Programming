#include <stdio.h>
#include <stdlib.h>
//12,34,22,98      38,90,88,12   //Yandaki 4x4 boyutundaki matrisi saat önünde 90'döndürecek fonksiyonu yazýnýz
//88,54,67,11      39,91,54,34   //(Sol matris döndürüldüðü zaman sağ matrise eþit olmalıdır)
//90,91,92,93  >>  40,92,67,22
//38,39,40,41      41,93,11,98

void elemanlari_goster(int[][4]);
void saat_yonunde_cevir(int[][4]);
int main(void)
{
    int matris[4][4]={
        {12,34,22,98},
        {88,54,67,11},
        {90,91,92,93},
        {38,39,40,41}};

        elemanlari_goster(matris); //fonksiyon çağrısı yapılıyor
        printf("\n");
        saat_yonunde_cevir(matris);

    }
void elemanlari_goster(int dizi[][4])
{
        int i,j;
        for(i=0;i<4;i++){
            for(j=0;j<4;j++)
               printf("%d ",dizi[i][j]);
        printf("\n");
    }
}
void saat_yonunde_cevir(int dizi[][4]) ///döndürülen matris yazılıyor
{
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
           printf("%d ",dizi[j][i]);
    printf("\n");
}
}
