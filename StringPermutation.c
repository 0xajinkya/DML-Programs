#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void perm(char *str, int start, int len)
{
    if (start == len)
    {
        printf("%s\n", str);
    }
    else
    {
        for (int i = start; i <= len; i++)
        {
            swap((str + start), (str + i));
            perm(str, start + 1, len);
            swap((str + start), (str + i));
        }
    }
}

int main()
{
    char str[20];
    printf("\nEnter String\n");
    scanf("\n%s", str);
    perm(str, 0, strlen(str)-1);
}