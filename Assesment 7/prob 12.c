
#include<stdio.h>//total number of two digit odd number
int disp_total_2digit_odd(int x);
int main()
{
    int a,b;
    scanf("%d",&a);
    b=disp_total_2digit_odd(a);
    printf("%d",b);
    return 0;
}
 int disp_total_2digit_odd(int x)
 {
    int z=0,y;
    for(;x>10;x/=10)
    {
      y=x%100;
      if(y%2==1)
      {
        z++;
      }
    }return z;
 }
