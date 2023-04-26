//Program to check whether a given number positive or Negative
#include<stdio.h>
int main(){
    printf("Enetr a number");
    int num = 0;
    scanf("%d", &num);
    
    if( num == 0)
        printf("Zero");
    else
        (num > 0) ? printf("positive number") : printf("Negative number");

}
    