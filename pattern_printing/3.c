#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", n + j);
        }
        printf("\n");
        n++;
    }

    return 0;
}