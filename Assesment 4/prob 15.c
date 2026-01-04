#include<stdio.h>
int main(){
int n,temp,msb,p=1;
scanf("%d",&n);
temp=n;
while(temp>=10){
temp=temp/10;
p=p*10;
}
msb=temp;
if(msb%2!=0)
n=n-p;
printf("%d",n);
return 0;
}
