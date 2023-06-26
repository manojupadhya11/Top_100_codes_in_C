//Program to chech whether inputted Number is Strong Number or Not 
#include<stdio.h>
//to get factorial of a number
int getfactorial(int n){
    int fact = 1;
    for(int i =1; i<=n; i++)
        fact = fact*i;
    return fact;
}
int checkstrong(int num){
    int digit,sum =0;
    int temp = num;
    while(temp!=0){
        digit = temp % 10;
        sum = sum + getfactorial(digit);
        temp /= 10;
    }
    return sum == num;
}
int main()
{
    int num;
    printf("Enter a Number to check whether it is a Strong Number or Not ");
    scanf("%d",&num);
    if(checkstrong(num))
        printf("%d is a Strong Number",num);
    else
        printf("%d is not a Strong Number",num);
    
    return 0;
}
