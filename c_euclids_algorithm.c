#include <stdio.h>
int gcd(int u, int v) {
    int t;
    while (u > 0) {
        if (u < v)
        { t = u; u = v; v = t; }
        u = u-v;
    }
    return v;
}
int main() {
    int x, y;
    printf("Enter two integers to find their GCD (Ctrl+D to exit):n");

     while (scanf("%d %d", &x, &y) != EOF) {
        if (x > 0 && y > 0) {
            printf("The GCD of %d and %d is %d\n", x, y, gcd(x, y));
        } else {
            printf("Both numbers must be positive integers.\n");
        }
        printf("Enter another pair of integers (Ctrl+D to exit):\n");
    }

    return 0;
}