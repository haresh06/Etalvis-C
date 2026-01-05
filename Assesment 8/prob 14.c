#include<stdio.h>
int main(){
    int arr[100];int count=0;int sum=0;
    for(int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){break;}
        count++;
    }
    if(count%2!=0){
        printf("%d\n",arr[(count/2)]);
    }
    else{printf("%d\n",((arr[(count/2)]+arr[((count/2)-1)])/2));}
    return 0;
    
}
