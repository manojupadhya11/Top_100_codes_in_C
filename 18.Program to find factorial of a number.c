//Program to find factorial of a number
#include<stdio.h>
int getfactorial(int num){
    if(num==0){
        return 1;
    }else{
        return num*getfactorial(num-1);
    }
}
int main ()
{
    int number;
    printf("Enter the Number to find its factorial");
    scanf("%d",&number);
    int fact = getfactorial(number);
    
    printf("Fact %d: %d",number, fact);
}