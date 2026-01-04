#include <stdio.h>
int main() {
    int n, first2, last2;
    scanf("%d", &n);
    first2 = n / 100;   
    last2  = n % 100; 
    if (first2 == last2)
        printf("1");
    else
        printf("0");
    return 0;
}
