#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=1,b=2,c=3;
    int *ptr1,*ptr2,*ptr3;

    ptr1=&a; //ptr1 a'n�n adresini tutuyor
    ptr2=&b;  //ptr2 b'nin adresini tutuyor.
    ptr3=&c;  //ptr3 c'nin adresini tutuyor

    *ptr1=*ptr2 +*ptr3;  ///->    a=b+c'den a=5 oluyor
    *ptr2=*ptr1+6;       ///->    b=a+6'dan b=11 oluyor(a 'n�n de�eri 5 idi)
    ptr3=ptr1;           ///->    c=a c'nin de�eri a'ya atan�yor
    *ptr1=*ptr2 + *ptr3;///->     a=b+c=5+11 den a=16 oluyor
    printf("a=%d,b=%d,c=%d\n",a,b,c); ///c'nin de�eri de�i�meden aynen kald�
}
///a=16
///b=11
///c=3
