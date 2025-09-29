#include<stdio.h>

int main(){
    int ones,tens,num,reversed;
    printf("enter num:");
    scanf("%d",&num);
    tens = num/10;
    ones = num%10;
     reversed =(ones*10)+tens;
    printf("the reversed value is %d",reversed);
    return 0;
}