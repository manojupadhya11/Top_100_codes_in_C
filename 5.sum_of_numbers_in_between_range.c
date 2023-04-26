//Program to calculate the sum for range of numbers (a, b)

#include<stdio.h>
int main(){
    
    int num1, num2, sum = 0;
    printf("Enetr the value of number1 ");
    scanf("%d", &num1);
    printf("Enter the value of number2 ");
    scanf("%d", &num2);
    if(num1 < num2)
        //if num1 < num2
        for(int i = num1; i<=num2; i++){
            sum = sum+i;
        }
    else
        //if num2 <num1
        for(int i = num2; i<= num1; i++){
            sum = sum+i;
        }
    printf("%d", sum);
    return 0;

}
    