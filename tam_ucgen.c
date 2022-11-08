#include<stdio.h>
int main()
{
    int i,j,satir,k=0;
    printf("Kac satir Istiyorsunuz:");
    scanf("%d",&satir);
    
    for(i=1;i<=satir;i++)
    {
        for(j=1;j<=satir-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}