//Program to chech whether inputted Number is Perfect Number or not
#include<stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a Number to check whether it is a Perfect Number or Not ");
    scanf("%d",&num);
    for(int i = 1; i<num; i++){
        if(num%i==0){
           sum = sum + i;
        }
    }
    if(sum == num)
        printf("%d is a Perfect Number",num);
    else
        printf("%d is not a Perfect Number",num);
    
    return 0;
}
