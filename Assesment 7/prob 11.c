
#include<stdio.h>//total number digit which is odd number
int disp_total_odd_digits(int x);
int main()
{
    int a,b;
    scanf("%d",&a);
    b=disp_total_odd_digits(a);
    printf("%d",b);
    return 0;
}
 int disp_total_odd_digits(int x)
 {
    int z=0,y;
    for(;x>0;x/=10)
    {
      y=x%10;
      if(y%2==1)
      {
        z++;
      }
    }return z;
 }
