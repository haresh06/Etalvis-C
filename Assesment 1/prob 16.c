#include <stdio.h>

int main() {
    int num, ones;

    scanf("%d", &num);

    ones = num % 10;        // extract one's digit
    printf("%d", 10 + ones);

    return 0;
}
