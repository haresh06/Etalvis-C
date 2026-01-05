
#include<stdio.h>//total number of single digit prime number
int disp_2digit_even_sum6();
int main()
{
    int b;
   // scanf("%d",&a);
    b=disp_2digit_even_sum6();
    printf("%d",b);
    return 0;
}
 int disp_2digit_even_sum6()
 {
    int z=0,y=1,w=1;
    for(int i=2;i<10;i++)
    {
        if(y==2)
        {
            z++;
            continue;
        }
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                w=0;
                break;
            }
        }if(w==1)
        {
            z++;
        }w=1;
    }return z;
 }
