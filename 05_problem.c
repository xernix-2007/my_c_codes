#include<stdio.h>

int main(){
    int prime = 0,n;
    printf("enter number:\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
       if( i%n == 0){
        prime = 1;
       }
    }
    if (prime)
    {
        printf("%d is not a prime number",n);
    }
    else{
        printf("%d is a prime number",n);
 
    }
    return 0;
}