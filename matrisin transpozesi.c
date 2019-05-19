#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a,b,i,j;

    printf("Matrisin Satir sayisini giriniz:");
    scanf("%d",&a);
    printf("Matrisin Sutun sayisini girin:");
    scanf("%d",&b);

    int matris[a][b],matrisX[b][a];
    //Matrise elemanları kullanıcıdan alma
    for(i=0;i<a;i++)
        for(j=0;j<b;j++){
            printf("%dx%d elemani giriniz :",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
        //Matrisin Traspozunu alma
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                matrisX[j][i]=matris[i][j];
            }
            printf("\n");
        }
        //Matrisin elemanlarýný ekrana yazdýrma
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                printf("%d",matris[i][j]);
            }
            printf("\n");
        }
        //Matrisin Tranpozunun ekrana yazdirilmasi
        for(i=0;i<b;i++){
            for(j=0;j<a;j++){
                printf("%d",matrisX[i][j]);
            }
            printf("\n");
        }
        getch();
        return 0;
    }





