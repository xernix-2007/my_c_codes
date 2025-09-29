#include<stdio.h>

int main(){
    int n, i=1;
    printf("enter number :\n");
    scanf("%d", &n);
    do{
        printf("the number is %d\n", i);
        i++;
    } while (i<=n);
    return 0;
}