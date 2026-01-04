#include <stdio.h>
int main() {
    int n, d1, d2;
    scanf("%d", &n);
    d1 = n / 10;   
    d2 = n % 10;   
    if (d1 != d2)
        printf("1");
    else
        printf("0");
            return 0;
}
