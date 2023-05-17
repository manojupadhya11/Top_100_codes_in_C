//Program to check whether the given number is palindrome or not
#include<stdio.h>
int main(){
    int num = 0;
    printf("Enter a number");
    scanf("%d", &num);
    int number = num;
    int rev, rem = 0;
    while(number != 0){
        rem = number%10;
        rev = rev*10 + rem;
        number /= 10;    
    }
    if(num == rev)
    {
        printf("The given number %d is Palindrome", num);
    }else{
        printf("The given number %d is not a Palindrome", num);
    }

}