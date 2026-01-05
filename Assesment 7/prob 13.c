
#include<stdio.h>//total number of single digit perfect square numbers
int disp_single_digit_square(int x);
int main()
{
    int a,b;
    scanf("%d",&a);
    b=disp_single_digit_square(a);
    printf("%d",b);
    return 0;
}
int disp_single_digit_square(int x)
{int y,z=0;
    for(;x>0;x/=10)
    {y=x%10;
        for(int i=1;i<4;i++)
        {
            if((i*i)==y)
            { 
              z++;
              break;
            }
        }
    }return z;
}
