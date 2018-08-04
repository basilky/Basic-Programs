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
        printf("smmal id %d",a);
        break;
        }
        if(!e)
        {
        printf("smmal id %d",b);
        break;
        }
        if(!f)
        {
        printf("smmal id %d",c);
        break;
        }
    }

}