
#include<stdio.h>//sum of 2 digit number whose one's digit is 5
int disp_2digit_ones5(int x);
int main()
{
    int a=10,b;
    b=disp_2digit_ones5(a);
    printf("%d",b);
    return 0;
}
int disp_2digit_ones5(int x)
{
    int z,w=0;
    for(;x<100;x++)
    {z=x%10;
        
      if(z==5)
      {
          w=x+w;
      }
    }
    return w;
}
