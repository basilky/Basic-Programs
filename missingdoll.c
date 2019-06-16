/*
Chef and Dolls(from codecheff)
------------------------------

Chef is fan of pairs and he likes all things that come in pairs.
He even has a doll collection in which all dolls have paired.
One day while going through his collection he found that there are odd number of dolls. 
Someone had stolen a doll!!!
Help chef find which type of doll is missing..

*/

#include<stdio.h>
void main()
{
    int n,i,j,a[20],c=-1,in,flag=0;
    struct doll
    {
        int pairnumber,count;
    }s[100];
    printf("\nenter number of dolls remaining: ");
    scanf("%d",&n);
    printf("\nenter pair numbers\n");
    for(i=0;i<n;i++)
    {
        flag=0;
        scanf("%d",&in);
        for(j=0;j<=c;j++)
        {
            if(s[j].pairnumber==in)
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
            s[c].pairnumber=in;
        }
    }
    for(j=0;j<=c;j++)
    {
        if(s[j].count%2==1)
        {
            printf("\ndoll %d is missing\n",s[j].pairnumber);
        }
    }
}
