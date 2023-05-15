//Program to find sum of digits in a given number
#include<stdio.h>
int main(){
    int num, sum = 0;
    printf("Enter the number to find sum of its digits");
    scanf("%d", &num);
    int num1 = num;
    while(num!=0){
        sum += num%10;
        num = num/10;
    }
    printf("the sum of digits in %d number is %d", num1,sum);
    return 0;
}