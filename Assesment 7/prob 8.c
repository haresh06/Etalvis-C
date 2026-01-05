
#include<stdio.h>//interchange first and last digit
int check_last_digit_odd(int x);
int main()
{
    int a;
    scanf("%d",&a);
    check_last_digit_odd(a);
    return 0;
}
 int check_last_digit_odd(int x)
 {
    int y=1,w;
    y=x%10;
    printf("%d",y);
    x=x/10;
    w=x;
    y=1;
    for(;x>10;x/=10)
    {
        y=y*10;
    }
    
    printf("%d%d",w%y,w/y);

    return 0;
 }
