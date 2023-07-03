//Program to find GCD of Two numbers
#include<stdio.h>

int main()
{
    int num1,num2=0;
    printf("Enter a Number 1  ");
    scanf("%d",&num1);
    printf("Enter a Number 2  ");
    scanf("%d",&num2);
    int gcd = 1;
    for(int i = 1; i<=num1 || i<=num2; i++){
        if(num1%i==0 && num2%i ==0){
            gcd = i;
        }
    }
    printf("GCD of %d and %d is :%d",num1,num2,gcd);
    return 0;
}