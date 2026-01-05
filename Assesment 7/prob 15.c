
#include<stdio.h>//total no of single digit prime number in number
int disp_single_digit_prime(int x);
int main()
{
    int a,b;
    scanf("%d",&a);
    b=disp_single_digit_prime(a);
    printf("%d",b);
}
int disp_single_digit_prime(int x)
{ int y,z,w;
    for(;x>0;x/=10)
    {   y=x%10;
         if(y==2)
            {
               z++;
            }
        else
        {
          for(int i=2;i<=y/2;i++)
          {   
            if(y%i==0)
            {     w=1;
                  break;
            }
          }if(w==0&&y!=1)
          {
            z++;
            //printf("%d",y);
          }
       }w=0;
    }return z;
}
