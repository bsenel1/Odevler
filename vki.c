#include <stdio.h>
int main(){
double boy,kilo,indeks;
printf("Lutfen Boyunuzu Giriniz (m):");
scanf("%lf" ,&boy);
printf("Lutfen Kilonuzu Giriniz (kg):");
scanf("%lf" ,&kilo);
boy=boy*boy;
indeks= kilo/boy;
if(indeks<18)
{
    printf("Vucut Kitle Indeksiniz %lf,Zayif.",indeks);
}
else if(indeks<25)
{    
    printf("Vucut Kitle Indeksiniz %lf,Normal,",indeks);
}
else if(indeks<30)
{
    printf("Vucut Kitle Indeksiniz %lf,Kilolu,",indeks);
}
else
{
    printf("Vucut Kitle Indeksiniz %lf,Obez,",indeks);
}
return 0;
}

