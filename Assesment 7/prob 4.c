
#include<stdio.h>//sum of 2 digit odd number whose ten's digit is 7
int disp_2digit_odd_sum_tens7(int x);
int main()
{
    int a=71,b;
    b=disp_2digit_odd_sum_tens7(a);
    printf("%d",b);
    return 0;
}
int disp_2digit_odd_sum_tens7(int x)
{
    int z,w=0;
    for(;x<80;x+=2)
    {z=x/10;  
      if(z==7)
      {
          w=x+w;
      }
    }
    return w;
}
