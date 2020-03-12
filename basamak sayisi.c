#include <stdio.h>
#include <stdlib.h>

int basamakbul(int n);
void main()
{

    int sayi;
    printf("Sayiyi girin: ");
    scanf("%d",&sayi);
    printf("\n%d sayisi %d basamakli bir sayidir\n",sayi,basamakbul(sayi));

}

int basamakbul(int n)
{
    if(n<10)
        return 1;
    else
    {
        return 1+basamakbul(n/10);
    }
}
