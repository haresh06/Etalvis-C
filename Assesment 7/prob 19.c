
#include<stdio.h>//lcm of three number
int a,b,c,d,max;
int disp_lcm3(int x,int y,int z);
int main()
{
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
      if(a>c)
        max=a;
      else
        max=c;}
    else{
        if(b>c)
         max=b;
        else
        max=c; 
    }    
    d=disp_lcm3(a,b,c);
    printf("%d",d);}
int disp_lcm3(int x,int y,int z)
{
   for(int i=max;i<=(y*z*x);i++)
   {
     if((i%x==0)&&(i%y==0)&&(i%z==0))
      {
        return i;
      }
   }return 0;
}
   
  
