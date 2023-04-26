//Program to calculate sum of n natural numbers using for loop
#include <stdio.h> 

int main()
{
 int num = 0, sum = 0;
 int i;
 printf("Enter the value of n  ");
 scanf("%d", &num);
 for(i = 0; i<=num; i++){
    sum = sum + i;
 }
 printf("the sum of first %d natural number is %d ",num,sum);
}
    