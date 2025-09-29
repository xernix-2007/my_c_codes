#include<stdio.h> 
int sum(int x , int y){
  return  (x+y);}
  int sub(int x,int y){
    return(x-y);}
    int mul(int x, int y){
        return ( x*y);}
int main(){
int a,b,m,n,o,choice;
printf("enter a,b:");
scanf("%d %d", &a, &b);
printf("what you want to do:\n");
printf("1 = sum\n");
printf("2 = sub\n");
printf("3 = mul\n");
printf("enter choice from (1-3):");
scanf("%d", &choice);
if(choice==1){printf("%d",sum(a,b));}
else if(choice==2){printf("%d",sub(a,b));}
else if(choice==3){printf("%d",mul(a,b));}
else{printf("invalid");}
return 0;
}