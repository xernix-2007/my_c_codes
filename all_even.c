#include<stdio.h>

int main(){
    int n,i=1;
    printf("enter number:");
    scanf("%d",&n);
    while (i<=n && i%2==0);
    {
        i++;
        printf("%d\n",i);
    }
    
    return 0;
}