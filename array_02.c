#include<stdio.h>

int main(){
    int arr[50],m,i,n;
    printf("enter how many no want:");
    scanf("%d",&m);
    printf("enter integers:",m);
    for (i = 0; i < m; i++){
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < m-1; i+=2){
        n=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=n;
    }
    printf("after swapping :\n");
    for ( i = 0; i < m; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}