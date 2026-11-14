#include<stdio.h>
int main(){
    int A;
    printf("inserisci un anno \n");
    scanf("%d", &A);
    if ( A%100!=0 && A%4==0){
        printf(" l anno   bisestile %d\n");
    }
    else if ( A%400==0 )
    {
        printf("l anno e bisestile %d\n");
    }
    else
        printf("l anno non e bisestile %d\n");
}