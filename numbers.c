#include<stdio.h>
int main()
{
int i,n,k,t,temp,count=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&temp);
    if(temp%k==0)
        count++;
}
printf("\ncount : %d\n",count);
}