#include<stdio.h>
int main(){
    int l1,l2,l3,somme,res;
    printf("inserisci i lato1 di triangle in ordine crescenti\n" );
    scanf("%d",&l1);
    printf("inserisci i lato2 di triangle in ordine crescenti\n" );
    scanf("%d",&l2);
    printf("inserisci i lato3 di triangle in ordine crescenti\n" );
    scanf("%d",&l3);
    somme=(l1*l1)+(l2*l2);
    res=l3*l3;
        if (somme==res){
        printf("e un triangolo rectangolo \n");}
        else{
            printf(" non  un triangolo rectangolo \n");
        }
 
        







}