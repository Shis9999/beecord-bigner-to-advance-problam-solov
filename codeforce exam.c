#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (A[n] == x)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
