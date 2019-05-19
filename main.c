#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct list* next;
};

void basaEkle(int a,struct list *A){

    if(A==NULL){
        A->data=a;
        A->next=NULL;
    }

    else{
        struct list *new_node=malloc(sizeof(struct list));
        new_node->data=a;
        new_node->next = A;
        A = new_node;
    }
}
void ListeYaz(struct list *A){

    if(A==NULL){
        printf("Listeden cik");
    }

    else{
        struct list *gezici;
        gezici=A;
        while(gezici!=NULL){
            printf("%d",gezici->data);
            gezici=gezici->next;
        }
    }
}
int main()
{
    int a;
    printf("Bir sayi girin :");
    scanf("%d",&a);
    struct list *A;
    ListeYaz(A);
    basaEkle(a,A);
    ListeYaz(A);

    return 0;
}
