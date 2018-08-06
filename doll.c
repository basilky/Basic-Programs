#include<stdio.h>
void main()
{
    int n,i,j,a[20],c=-1,in,flag=0;
    struct basil
    {
        int ele,count;
    }s[100];
    printf("\nenter number of dolls : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        flag=0;
        scanf("%d",&in);
        for(j=0;j<=c;j++)
        {
            if(s[j].ele==in)
            {
                s[j].count++;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            c++;
            s[c].count=1;
            s[c].ele=in;
        }
    }
    for(j=0;j<=c;j++)
    {
        if(s[j].count%2==1)
        {
            printf("\ndoll %d missing\n",s[j].ele);
        }
    }
}
