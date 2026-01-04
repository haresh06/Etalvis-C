#include <stdio.h>

int main() {
    int num, firstTwo, lastTwo, reversedLastTwo;

    scanf("%d", &num);

    firstTwo = num / 100;          
    lastTwo = num % 100;          

    reversedLastTwo = (lastTwo % 10) * 10 + (lastTwo / 10);

    printf("%d", firstTwo * 100 + reversedLastTwo);

    return 0;
}
