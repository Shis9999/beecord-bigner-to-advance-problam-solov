#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x = n - 1;
    for (int i = x; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}