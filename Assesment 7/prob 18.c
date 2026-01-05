
#include<stdio.h>//lcm of two number
int a,b,c,d,max;
int disp_lcm2(int x,int y);
int main()
{
    scanf("%d%d",&a,&b);
    if(a>b)
        max=a;
    else
        max=b;    
    d=disp_lcm2(a,b);
    printf("%d",d);}
int disp_lcm2(int x,int y)
{
   for(int i=max;i<=(y*x);i++)
   {
     if((i%x==0)&&(i%y==0))
      {
        return i;
      }
   }return 0;
}
   
  
