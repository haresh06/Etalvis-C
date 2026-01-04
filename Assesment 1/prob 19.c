#include <stdio.h>

int main() {
    int num, tens;

    scanf("%d", &num);

    tens = (num / 10) % 10;

    num = num - (tens % 2) * 5;

    printf("%d", num);
    return 0;
}
