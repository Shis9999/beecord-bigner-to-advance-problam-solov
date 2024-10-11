#include <stdio.h>

int main() {
    long long int a, b, c, y;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &y);
    int flag = 0;

    long long int x1 = (a * b) - c;
    long long int x2 = (a * b) + c;
    long long int x3 = a + (b * c);
    long long int x4 = a - (b * c);
    long long int x5 = (a - b) + c;
    long long int x6 = (a + b) - c;

    if (x1 == y ||
        x2 == y ||
        x3 == y ||
        x4 == y ||
        x5 == y ||
        x6 == y) {
        flag = 1;
    }

    if (flag == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
