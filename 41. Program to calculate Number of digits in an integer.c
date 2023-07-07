//Program to calculate Number of digits in an integer
#include<stdio.h>
int main(){
    int number, count, temp = 0;
    printf("Enter the number to calculate Number of digits in it ");
    scanf("%d",&number);
    temp = number;
    while(number > 0){
        count ++;
        number = number/10;
    }
    printf("The count of digits in %d is %d ",temp, count);
}