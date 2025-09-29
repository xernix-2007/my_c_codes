#include<stdio.h>

int main(){
    int i = 0,n;
    printf("enter n:");
    scanf("%d",&n);
   int sum =0 ;
   while(i<=n){
    sum += i;
    i++;
   }
    printf("the sum of %d natural number is %d",n,sum);
    
    return 0;
}