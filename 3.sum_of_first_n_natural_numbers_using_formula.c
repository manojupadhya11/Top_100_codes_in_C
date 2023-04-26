//Program to calculate sum of n natural numbers using formula sum = n*(n+1)/2
#include <stdio.h> 

int main()
{
 int num = 0, sum = 0;
 printf("Enter the value of n  ");
 scanf("%d", &num);
sum = num*(num+1)/2;
 printf("the sum of first %d natural number is %d ",num,sum);
}
    