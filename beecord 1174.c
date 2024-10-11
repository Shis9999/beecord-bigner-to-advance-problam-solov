#include <stdio.h>
int main()
{
    int a[100];
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 100; i++)
    {
        if (a[i] <= 10)
        {
            printf("A[%d] = %.2f\n", i, a[i]);
        }
    }
    return 0;
}