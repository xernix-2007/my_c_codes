#include<stdio.h>
int sum(int ,int );//function prototype
int sum(int x, int y){// function definition
    //function the sum two integers
    return x + y;
}

int main(){
    int a,b ;
    printf("enter two integers:");
    scanf("%d %d", &a, &b);
    int result = sum(a,b);
    printf("%d", result);
    return 0;
}