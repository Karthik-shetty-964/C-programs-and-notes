#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", n);
            n--;
        }
        printf("\n");
        n = 5;
    }

    return 0;
}