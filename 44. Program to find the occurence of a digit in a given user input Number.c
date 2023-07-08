// Program to find the occurence of a digit in a given user input Number
#include<stdio.h>
int main(){
    int number, digit, temp, count = 0;
    printf("Enter a Number ");
    scanf("%d",&number);
    printf("Enter a digit to calculate its occurences ");
    scanf("%d",&digit);
    temp = number;
    while(number>0){
        int rem = number%10;
        if(rem == digit){
            count++;
        }
        number /= 10;
    }
    printf("The digit %d occurs %d times in the given number %d", digit, count, temp);
}
