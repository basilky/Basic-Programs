#include<stdio.h>
void main()
{
    int i,j,l,n,sum,temp;
    struct array
    {
        int a[50];
    };
    printf("enter sum : ");
    scanf("%d",&sum);
    printf("\nenter number of arrays : ");
    scanf("%d",&n);
    struct array str[n];
    while(n)
    {
        n--;
        printf("\nenter array length : ");
        scanf("%d",&l);
        printf("\nenter elements : ");
        for(i=0;i<l;i++)
        {
            scanf("%d",&str[n].a[i]);
        }
        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
                if(i!=j)
                {
                    temp=str[n].a[i]+str[n].a[j];
                    if(temp==sum)
                    {
                        printf("\nyes");
                        break;
                    }
                }

            }
        }
        if(i==l)
        printf("\nno");
    }
    
}