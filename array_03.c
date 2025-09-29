#include<stdio.h>

int main(){
    int arr[50],i,n;
    printf("enter no of int you want:");
    scanf("%d",&n);
    printf("enter int:");
    for ( i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("reverse order:");
    for ( i = n-1; i>=0 ; i--){
        printf("%d,",arr[i]);
    }
    return 0;
}