#include <stdio.h>

int main() {
    int i, j, flag;

    printf("Prime numbers between 100 and 1000:\n");

    for(i = 100; i <= 1000; i++) {
        flag = 0;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                flag = 1;  
                break;
            }
        }

        if(flag == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
