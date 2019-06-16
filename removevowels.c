/* 
Remove vowels from given string */
#include <stdio.h>
#include <string.h>
void main()
{
    char s[50];
    int i, j, k, flag = 0;
    char v[] = {'a', 'e', 'i', 'o', 'u'};
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++)
    {
        for (j = 0; j < (sizeof(v) / sizeof(v[0])); j++)
        {
            if (s[i] == v[j])
                flag = 1;
        }
        if (flag == 0)
            printf("%c", s[i]);
        else
            flag = 0;
    }
}
