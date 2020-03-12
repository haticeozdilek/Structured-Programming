#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[1000],harf;
    int i,frekans=0;
    printf("\nMetin giriniz:");

    gets(cumle);
    puts(cumle);

    printf("\nFrekansini bulmak istediginiz harfi girin:");
    scanf("%c",&harf);

    for(i=0;cumle[i]!='\0';i++)
    {
        if(harf==cumle[i])
            frekans++;
    }
    printf("\n%c harfinin frekansi %d dir",harf,frekans);

    return 0;
}
