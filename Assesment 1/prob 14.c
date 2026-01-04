#include <stdio.h>

int main() {
    int num, first, last, rev_last;

    scanf("%d", &num);

    first = num / 100;      // first two digits
    last = num % 100;       // last two digits

    rev_last = (last % 10) * 10 + (last / 10);  // reverse last two digits

    printf("%d%d", first, rev_last);

    return 0;
}
