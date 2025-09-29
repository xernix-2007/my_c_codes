#include<stdio.h>

int main(){
    int a;
    printf("enter value of a:\n");
    scanf("%d", &a);
    switch (a){
    case1:
       printf("the entered value is 1");
       break;
    case2:
       printf("the entered value is 2");
       break;
    case3:
       printf("the entered value is 3");
       break;
    default:
       printf("the entered value not matched");
    }
    return 0;
}