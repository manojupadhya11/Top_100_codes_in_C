//Program to chech whether inputted Number Harshad Number or Not
#include<stdio.h>

int isHarshad(int num){
    int sum = 0;
    int temp = num;
    
    while(temp !=0){
        sum = sum + temp %10;
        temp /= 10;
    }
    
    return num%sum == 0;

}
int main()
{
    int num;
    printf("Enter a Number to check whether it is an Harshad Number or Not ");
    scanf("%d",&num);
    if(isHarshad(num))
        printf("num: %d, is a Harshad Number",num);
    else
        printf("num: %d, is not a Harshad Number",num);
    return 0;
}
