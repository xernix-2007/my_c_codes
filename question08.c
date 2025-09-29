#include<stdio.h>
int main(){int num,n;printf("enter num of integers want:");scanf("%d",&n);
    int count=0;
    while (count<n){printf("enter integer:\n",n);scanf("%d", &num);
        if(num>=50){printf("fail\n");}
        else{printf("pass\n");}
        count++;}
    return 0;}