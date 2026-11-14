#include<stdio.h>
int main(){
    int a,b,c;
    printf("inserisci un numero a ,\n");
    scanf("%d",&a);

    printf("inserisci un numero b ,\n");
    scanf("%d",&b);
    printf("inserisci un numero c ,\n");
    scanf("%d",&c);
    if(a>b && a>c)

        printf(" %d il maggiore tra 3 numeri e  a \n ",a );
    else if(b>a&& b>c)
    
        printf(" %d il maggiore tra dei 3 numeri e b  \n ",b );
    else
        printf(" %d il maggiore tra dei 3 numeri e c  \n ",c );



}




