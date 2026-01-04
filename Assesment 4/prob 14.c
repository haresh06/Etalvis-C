#include<stdio.h>
int main(){
int n,temp,first,last,mid,p=1;
scanf("%d",&n);
temp=n;
last=n%10;
while(temp>=10){
temp=temp/10;
p=p*10;
}
first=temp;
mid=(n%p)/10;
n=last*p+mid*10+first;
printf("%d",n);
return 0;
}
