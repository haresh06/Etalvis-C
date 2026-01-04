#include <stdio.h>

int main() {
    int num, ones, hundreds, cond;

    scanf("%d", &num);

    ones = num % 10;
    hundreds = num / 100;

    cond = (ones % 2) * (hundreds % 2);

    num = num - (5 * cond);

    printf("%d", num);
    return 0;
}
