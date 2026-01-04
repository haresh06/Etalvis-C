#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    printf("%d", num - (num % 2) * 5);

    return 0;
}
