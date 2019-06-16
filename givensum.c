/*
Program to find whether given sum can be obtained by adding any two numbers in the given array 
*/
#include <stdio.h>
void main()
{
    int i, j, l, n, sum, temp, flag = 0;
    struct array
    {
        int a[50];
    };
    printf("enter sum : ");
    scanf("%d", &sum);
    printf("\nenter number of arrays : ");
    scanf("%d", &n);
    struct array str[n];
    while (n)
    {
        n--;
        printf("\nenter array length : ");
        scanf("%d", &l);
        printf("\nenter elements : ");
        for (i = 0; i < l; i++)
        {
            scanf("%d", &str[n].a[i]);
        }
        for (i = 0; i < l && !flag; i++)
        {
            for (j = 0; j < l && !flag; j++)
            {
                if (i != j)
                {
                    temp = str[n].a[i] + str[n].a[j];
                    if (temp == sum)
                    {
                        printf("\nSum possible\n");
                        flag = 1;
                    }
                }
            }
        }
        if (!flag)
            printf("\nSum not possible\n");
    }
}