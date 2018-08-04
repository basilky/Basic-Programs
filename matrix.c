#include<stdio.h>
int main()
{
    int r,c,a[100][100];
    scanf("%d%d",&r,&c);
    for(i=0;i<c;i++)
    for(j=0;j<r;j++)
    scanf("%d",&a[i][j]);
    struct node
    {
        int r,c;
        struct node *next;
    }s;
    s.r=0;
    s.c=0;

}