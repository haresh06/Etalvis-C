#include <stdio.h>

int main() {
    int num, sum, result;
scanf("%d", &num);
sum = (num / 10) + (num % 10);
result = num - 5 * (sum % 2);
printf("%d", result);
return 0;
}
