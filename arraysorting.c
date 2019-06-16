#include<stdio.h>
void main()
{
int i,j,k,temp;
char a[]={'z','f','j','c','n'};
int n;
n=sizeof(a)/sizeof(a[0]);
for(i=0;i<n;i++)
for(j=0;j<n-i-1;j++)
if(a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
for(j=0;j<n;j++)
	{
	printf("%c",a[j]);
	}
}
