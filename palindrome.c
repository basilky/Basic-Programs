#include<stdio.h>
void main()
{
    long long n,temp,rev;
    int noin,i,j=-1,a[1000];
    printf("\nenter number of inputs : ");
    scanf("%d",&noin);
    for(i=0;i<noin;i++)
    {    
        printf("\nenter number : ");
        scanf("%d",&a[i]);
    }
    while(1)
    {
        j++;
        if(i==j)
        {
            break;
        }
            n=a[j];
        while(1)
        {
            n++;
            rev=0;
            temp=n;
            while(temp>0)
            {
                rev=rev*10+temp%10;
                temp/=10;
            }
            if(rev==n)
            {
                printf("\n%lli",n);
                break;
            }
        }
    }
}