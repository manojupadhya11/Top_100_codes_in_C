//Program to chech whether inputted Number pair is Freindly pair or Not
#include<stdio.h>
int getdivisorsum(int num){
        int sum =0;
        for(int i =1; i<num; i++){
        if(num%i==0){
            sum = sum+i;
        }
    }
    return sum;
}
int main()
{
    int num1,num2=0;
    printf("Enter a Number 1  ");
    scanf("%d",&num1);
    printf("Enter a Number 2  ");
    scanf("%d",&num2);
    int sum1 = getdivisorsum(num1);
    int sum2 = getdivisorsum(num2);
    if(sum1/num1 == sum2/num2)
        printf("num: %d, %d are Freindly Pair",num1,num2);
    else
        printf("num: %d, %d are not Freindly Pair",num1,num2);
    return 0;
}
