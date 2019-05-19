#include <stdio.h>
#include <stdlib.h>

struct list{
    int data;
    struct list *next;
};
int Fibo(int a){ ///Fibonnacci fonksiyonunun tan�m� yap�ld�
    if(a<=1){
        return a;
    }
    else{
        return Fibo(a-1)+Fibo(a-2);
    }
}
struct list *fib_liste(int a){
    struct list *first_node=malloc(sizeof(struct list));///ilk node i�in malloc()ile yer ayr�ld�
    struct list *gezici=malloc(sizeof(struct list));  ///dizideki ilk node'u kaybetmemek i�in gezici ad�nda bir d���m i�in yer ayr�ld�
    first_node->data=Fibo(0);
    first_node->next=NULL; ///firs_node'un de�erini kaybetmemeai i�in next'ine NULL atand�
    gezici=first_node;
    int i=1;
    while(gezici!=NULL && i<=a){
        struct list *new_node=malloc(sizeof(struct list));
        new_node->data=Fibo(i);
        new_node->next=NULL;
        gezici->next=new_node;
        gezici=gezici->next;
        i++;
    }
    return first_node;
};
int main(){
    int a;
    printf("Bir deger giriniz :");
    scanf("%d",&a);
    struct list *first_node=fib_liste(a);
    struct list*gezici=malloc(sizeof(struct list));
    gezici=first_node;
    while(gezici->next!=NULL){
        printf("%d\t",gezici->data);
        gezici=gezici->next;
    }
}







