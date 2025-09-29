#include <stdio.h>
void numanalyzer(int x);

int main() {
    int a,b, count = 0;
     int oddcount = 0;int evencount = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 0) {
        count = 1;
    } else {
        while (a > 0) {
            count++;      
            a = a / 10; 
        }
    }printf("Number of digits = %d\n", count);

    //new part begins
    while(b>0){
        if (b%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
        b=b/10;
    }
    printf("even%d,odd%d",evencount,oddcount);

    return 0;
}
