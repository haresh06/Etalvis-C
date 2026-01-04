#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    num = (num / 100) * 100 + (num % 10);
    printf("%d", num);

    return 0;
}
