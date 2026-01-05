
#include<stdio.h>//hcf of two number
int a,b,c;
int disp_count_hcf2(int x,int y);
int main()
{
    scanf("%d%d",&a,&b);
    c=disp_count_hcf2(a,b);
    printf("%d",c);
}
int disp_count_hcf2(int x,int y)
{
   int temp;
   while (y!=0)
   {
     temp=y;
     y=x%y;
     x=temp;
    }return x;
   }
   
  
