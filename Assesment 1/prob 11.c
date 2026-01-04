#include <stdio.h>

int main() {
    int num, sum;

    scanf("%d", &num);

    sum = (num / 100) + (num / 10) % 10 + (num % 10);

    printf("%d", sum);
    return 0;
}
