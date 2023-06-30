//Program to chech whether inputted Number Abundant Number or Not
#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter a Number to check whether it is an Abundant Number or Not ");
    scanf("%d",&num);
    for(int i =1; i<num; i++){
        if(num%i==0){
            sum = sum+i;
        }
    }
    if(sum>num)
        printf("num: %d, is a Abundant Number",num);
    else
        printf("num: %d, is not an Abundant Number",num);
    return 0;
}
