//Program to calculate the sum of n natural numbers using recursion

#include<stdio.h>

//drive code
int main(){
    printf("Enetr a value of n ");
    int num, sum = 0;
    scanf("%d", &num);
    
    for(int i =0; i<= num; i++){
        sum = sum + i;
    }
    printf("the sum of %d natural number is %d", num,sum);
    return 0;

}
    