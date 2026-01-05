
#include<stdio.h>//if last digit is even print number otherwise subract 1 from msb
int check_last_digit_odd(int x);
int main()
{
    int a,b;
    scanf("%d",&a);
    b=check_last_digit_odd(a);
    printf("%d",b);
    return 0;
}
 int check_last_digit_odd(int x)
 {
    int z=0,y=1,w=x;
    for(;x>10;x/=10)
    {
        y=y*10;
    }
    z=w-y;
    return z;
 }
