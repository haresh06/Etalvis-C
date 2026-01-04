#include <stdio.h>

int main() {
    int num, tens, units;

    scanf("%d", &num);

    tens = num / 10;
    units = num % 10;

    printf("%d%d", units, tens);

    return 0;
}
