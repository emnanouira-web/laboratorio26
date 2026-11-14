#include<stdio.h>
int main(){
    int l1,l2,l3,sol1,sol2,sol3,sol4,sol5;
    printf("inserisci i lato1 di triangle in ordine crescenti\n" );
    scanf("%d",&l1);
    printf("inserisci i lato2 di triangle in ordine crescenti\n" );
    scanf("%d",&l2);
    printf("inserisci i lato3 di triangle in ordine crescenti\n" );
    scanf("%d",&l3);
    
   if (l1 == l2 && l2 == l3) {
        printf("Il triangolo e equilatero\n");
    }
    // 2. Triangolo Isoscele: almeno due lati sono uguali
    else if (l1 == l2 || l1 == l3 || l2 == l3) {
        printf("Il triangolo e isoscele\n");
    }

    
    else{
        
        printf("il triangolo e scaleno\n");

        
        
    }
    
    


}