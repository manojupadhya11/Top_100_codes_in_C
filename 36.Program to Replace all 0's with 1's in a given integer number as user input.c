//Program to Replace all 0's with 1's in a given integer number as user input
#include<stdio.h>
int main()
{
    int num1, num2=0;
    printf("Enter the value for number1 ");
    scanf("%d",&num1);
    //check if num1==0
    if(num1==0){
        num2 =  1;
    }
    //replace 0's with 1's
    while(num1>0){
        int rem = num1%10;
        if(rem==0){
            rem = 1;
        }
        num2 = num2*10+rem;
        num1 /=10;
    }
    //reverting the num2
    int num = 0;
    while(num2>0){
        int r = num2%10;
        num = num*10+r;
        num2 /=10;
    }
    printf("The number after Conversion is: %d",num);
    return 0;
}