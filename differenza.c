#include<stdio.h>
int main(){
    int G1,M1,A1;
    printf("inserisci primo  giorno1 G1:\n");
    scanf("%d",&G1);
    printf("inserisci primo mese1 M1 :\n");
    scanf("%d",&M1);
    printf("inserisci primo anno1 A1:\n");
    scanf("%d",&A1);
    int N0,N1,N2,N3;
    N0=(M1-14)/12;
    printf("risultat di N0 e:%d\n", N0);

    N1=1461*(A1+4800+N0)/4;
    printf("risultat di N1 e:%d\n", N1);
    N2=367*(M1-2-12*N0)/12;
    printf("risultat di N2 e:%d\n", N2);
    N3=3*(A1+4900+N0)/400;
    printf("risultat di N3 e:%d\n", N3);
    int JD1;
    JD1=N1+N2-N3+G1-32075;
    printf("il primo giorno giuliano JD1e: %d\n", JD1);

    int G2,M2,A2;
    printf("inserisci secondo  giorno2 G2:\n");
    scanf("%d",&G2);
    printf("inserisci secondo mese2 M2 :\n");
    scanf("%d",&M2);
    printf("inserisci secondo anno2 A2:\n");
    scanf("%d",&A2);
    int N00,N11,N22,N33;
    N00=(M2-14)/12;
    printf("risultat di N0 e:%d\n", N00);

    N11=1461*(A2+4800+N00)/4;
    printf("risultat di N11 e:%d\n", N11);
    N22=367*(M2-2-12*N00)/12;
    printf("risultat di N22 e:%d\n", N22);
    N33=3*(A2+4900+N00)/400;
    printf("risultat di N33 e:%d\n", N33);
    int JD2;
    JD2=N11+N22-N33+G2-32075;
    printf("il secondo giorno giuliano JD2e: %d\n", JD2);
    int D;
    D=JD2-JD1;
    printf("la differenza fra i giorno giuliani :%d\n",D  );
    return 0;
    











}