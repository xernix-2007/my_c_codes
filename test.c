#include<stdio.h>

int main(){
    int oddcount = 0;int evencount = 0,a;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a>0){
        if (a%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
        a=a/10;
    }
    printf("even%d,odd%d",evencount,oddcount);

    return 0;
}
