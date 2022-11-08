#include<stdio.h>
int main(){
double ales,yds,mezuniyet,result;
    printf("ALES puaninizi giriniz:");
    scanf("%lf" ,&ales);
    printf("YDS puaninizi giriniz:");
    scanf("%lf" ,&yds);
    printf("Mezuniyet Ortalamanizi giriniz:");
    scanf("%lf" ,&mezuniyet);
    result = (ales*50 + yds*25 + mezuniyet*25)/100;
    if(yds<70)
    {
        printf("Elendiniz.");
    }
    else if(result>60)
    {
        printf("Gectiniz.");
    }
    else
    {
        printf("Elendiniz.");
    }
    
    return 0;
}
