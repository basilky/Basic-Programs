/*

Smallest of numbers without using comparison

*/

#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d",&a,&b,&c);
    d=a;
    e=b;
    f=c;
    while(1)
    {
        d--;
        e--;
        f--;
        if(!d)
        {
        printf("small id %d",a);
        break;
        }
        if(!e)
        {
        printf("small id %d",b);
        break;
        }
        if(!f)
        {
        printf("small id %d",c);
        break;
        }
    }
}