#include <stdio.h>
int main() {
    int n, d0, d1;
    scanf("%d", &n);
    d0 = n / 10;   // digit 0 (tens place)
    d1 = n % 10;   // digit 1 (units place)
    if (d1 <= d0)
        printf("1");
    else
        printf("0");
    return 0;
}
