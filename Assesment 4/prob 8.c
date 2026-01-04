#include<stdio.h>
int main(){
int i,a,b;
for(i=10;i<100;i++){
a=i/10;
b=i%10;
if(i%2==0 && a+b==6)
printf("%d\n",i);
}
return 0;
}
