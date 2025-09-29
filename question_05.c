//input two integers distinct into variables a and b. print the message only when a is greater?
#include<stdio.h>

int main(){
    int a,b;
    printf("enter a :");
    scanf("%d", &a);  
    printf("enter b :");
    scanf("%d", &b);
    if (a>b){
        printf("a is greater than b");
    }
    else{
        printf("b is greater than a");
    }
    return 0;
}