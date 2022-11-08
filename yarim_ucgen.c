#include<stdio.h>           
int main()
{
    int i,j,satir;
    printf("Kac Satir Istiyorsunuz:");
    scanf("%d",&satir);
    printf("\n");
    for(i = 1; i <= satir; ++i)
    {
        for(j = 1; j <= i;  ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}