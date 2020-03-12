#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char isim[9]="Ali";
    int secim;
    int parola=2210;
    char istenecekIsim[9];
    int bakiye=1000;
    int istenecekParola;
    int yatirilacakPara; int cekilecekPara;
    printf("\nBankamatige hosgeldiniz\nLutfen kullanici adinizi girin:");
    scanf( "%s",istenecekIsim);


    printf("Lutfen sifrenizi giriniz: ");
    scanf("%d",&istenecekParola);

    if(strcmp(isim,istenecekIsim)==0 && istenecekParola==parola){
        printf("Kullanici bilgileri eslenmistir..\n");
        printf("Lutfen asagidaki islemlerden birini seciniz\n[1]-Para Yatirma\n[2]-Para Cekme\n[3]-Kullanici Bilgileri\nSeceneklerden birini seciniz ");
        scanf("%d",&secim);

        if(secim==1){
            printf("\nPara Yatirma Ýslemindesiniz,kac para yatirmak istersiniz?");
            scanf("%d",&yatirilacakPara);
            bakiye+=yatirilacakPara;
            printf("Para yatirma isleminiz basarili\nYatirdiginiz miktar:%d\nSu an ki bakiyeniz:%d",yatirilacakPara,bakiye);

        }
        else if(secim==2){
            printf("\nPara cekme islemindesiniz, kac para cekmek istersiniz ");
            scanf("%d",&cekilecekPara);
            bakiye-=cekilecekPara;
            printf("Para cekme isleminiz basarili\nCekeceginiz miktar:%d\nSu an ki bakiyeniz:%d",cekilecekPara,bakiye);
        }
        else if(secim==3){
            printf("Kullanici arayuzune hosgeldiniz\nKullanici adiniz:%s\nKullanici sifreniz:%d\nHesabinizdaki kalan bakiye:%d",isim,parola,bakiye);
        }
        else{
            printf("Yanlis secim yaptiniz,Lutfen tekrar deneyiniz");
        }
    }
    else{
        printf("Kullanici adi ya da sifre hatali");
    }

}
