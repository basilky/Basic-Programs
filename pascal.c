#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j,k,l,digit,num,pow=1;
    printf("enter no: of rows ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        num=pow;
            for(j=0;j<n-i;j++)
            {
            printf(" ");
            }
        while(num%10>0)
        {
            digit=num%10;
            num/=10;
            printf("%d",digit);
            printf(" ");
        }
        pow*=11;
        printf("\n");
    }
}
