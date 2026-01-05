
#include<stdio.h>//reverse the number
int disp_sum(int x);
int main()
{
    int a,b;
    scanf("%d",&a);
    b=disp_sum(a);
    printf("%d",b);
    return 0;
}
int disp_sum(int x)
{
    int y=0,z=0;
    for(;x>0;x/=10)
    {
        z=x%10;
        y=(y*10)+z;
    }
    return y;
}
