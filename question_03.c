#include<stdio.h>

int main(){
    float a,x,b,c,sum;
    printf("enter a:\n");
    scanf("%f",&a);
    x = a/10;
    printf("the value of x is %f\n",x);
    a = (x*10)/100;
    b = (x*100)/100;
    c = (x/10);
    sum = a+b+c;
    printf("the sum of %f,%f and %f is %f\n",a,b,c,sum);
    return 0;
} 