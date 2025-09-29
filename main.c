#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess, attempts = 0;
    srand(time(0));//seed the random number
    number = rand()%100+1;//random number between 1 and 100
    printf("enter a number between 1 and 100:\n");
    //loop begins for random number generate
   
    do{
        printf("enter guess number:");
        scanf("%d",&guess);
        attempts++;
        if (guess > number)
        {
            printf("the number %d guess by you is too big\n",guess);
        }
        else if (number > guess)
        {
            printf("the number %d guess by you is too small\n",guess);
        }
        else{
           printf("congratulations! you guessed the number %d in %d attempts\n", number,attempts);
        }
        
    } while (number!=guess);
    
    return 0;
}