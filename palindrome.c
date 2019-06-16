/*
Finds nearest palndrome number of given numbers
*/
#include <stdio.h>
void main()
{
    long long number, temp, reverse;
    int no_of_inputs, i, j = -1, a[1000];
    printf("\nenter number of inputs : ");
    scanf("%d", &no_of_inputs);
    for (i = 0; i < no_of_inputs; i++)
    {
        printf("\nenter number : ");
        scanf("%d", &a[i]);
    }
    while (1)
    {
        j++;
        if (i == j)
        {
            break;
        }
        number = a[j];
        while (1)
        {
            reverse = 0;
            temp = number;
            while (temp > 0)
            {
                reverse = reverse * 10 + temp % 10;
                temp /= 10;
            }
            if (reverse == number)
            {
                printf("\n%lli", number);
                break;
            }
            number++;
        }
    }
}