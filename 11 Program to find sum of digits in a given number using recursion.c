//Program to find sum of digits in a given number using recursion
#include<stdio.h>
int getsum(num, sum){
    if(num==0){
        return sum;
    }
    
    sum += num%10;
        
    return getsum(num/10, sum);
}
int main(){
    int num, sum = 0;
    printf("Enter the number to find sum of its digits");
    scanf("%d", &num);
    printf("the sum of digits in %d number is %d", num, getsum(num,sum));
    return 0;
}