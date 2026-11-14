#include<stdio.h>
int main(){
    int G,M,A;
    printf("inserisci un giorno G:\n");
    scanf("%d",&G);
    printf("inserisci un mese M :\n");
    scanf("%d",&M);
    printf("inserisci un anno A:\n");
    scanf("%d",&A);
    int N0,N1,N2,N3;
    N0=(M-14)/12;
    printf("risultat di N0 e:%d\n", N0);

    N1=1461*(A+4800+N0)/4;
    printf("risultat di N1 e:%d\n", N1);
    N2=367*(M-2-12*N0)/12;
    printf("risultat di N2 e:%d\n", N2);
    N3=3*(A+4900+N0)/400;
    printf("risultat di N3 e:%d\n", N3);
    int JD;
    JD=N1+N2-N3+G-32075;
    printf("il giorno giuliano JD e:%d\n", JD);
    int R;
    R=(JD%7);
    printf("il giorno della settimana e : %d\n" , R);
    int lunedi, martedi,mercoledi,giovedi,venerdi,sabato,domenica;
    lunedi=0;
    martedi=1;
    mercoledi=2;
    giovedi=3;
    venerdi=4;
    sabato=5;
    domenica=6;
    printf("Il resto e': %d (0=lunedi, 1=martedi, 2=mercoledi, 3=giovedi, 4=venerdi, 5=sabato, 6=domenica)\n", R);


    









}