#include<stdio.h>

int main(){
    int product = 1;
    int n = 1;
    printf("enter value :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        product *= i;
    }
    printf("the value of the factorial is %d", product);
    return 0;
}