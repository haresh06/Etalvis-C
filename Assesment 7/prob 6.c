
#include<stdio.h>//print sum of digit
int disp_sum_all_digit(int x);
int main()
{
    int a,b;
    scanf("%d",&a);
    b=disp_sum_all_digit(a);
    printf("%d",b);
    return 0;
}
int disp_sum_all_digit(int x)
{
    int y=0,z=0;
    for(;x>0;x/=10)
    {
        z=x%10;
      y=y+z;
    }
    return y;
}
