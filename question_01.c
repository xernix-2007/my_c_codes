#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,s;
    float area;
    printf("enter value of a:\n");
    scanf("%f", &a);
    printf("enter value of b:\n");
    scanf("%f", &b);
    printf("enter value of c:\n");
    scanf("%f", &c);
    s=(a+b+c)/2;
    printf("the value of s is %f\n",s);
   area = sqrt(s*(s-a)*(s-b)*(s-c)) ;
    printf("the area of the triangle is %f\n",area);
    return 0;
}