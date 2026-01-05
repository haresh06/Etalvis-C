
#include<stdio.h>//total count of numbers which less than 100000 and whose sum of digit is 14
int disp_count_sum14();
int main()
{
    int a=disp_count_sum14();
    printf("%d",a);
    return 0;
}
int disp_count_sum14()
{
    int b=0,c=0;
    for(int i=1;i<=100000;i++)
    {
      for(int j=i;j>0;j/=10)
      {
        b=(j%10)+b;
      }if(b==14)
       {
        c++;
       }b=0;
    }return c;
}
