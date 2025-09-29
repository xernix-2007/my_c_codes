#include<stdio.h>

int main(){
    float radius;
    printf("enter radius:");
    scanf("%f", &radius);
    printf("the area of the circle with radius %fis %f\n",radius,3.14*radius*radius);
    printf("the perimeter of circle with radius %f is %f\n",radius, 2*3.14*radius);
    return 0;
}