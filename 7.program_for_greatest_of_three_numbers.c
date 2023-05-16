//Program to find greatest of three numbers
#include<stdio.h>
int main(){
    int num1, num2, num3 =0;
    printf("Enter the value of num1 ");
    scanf("%d", &num1);
    printf("Enter the value of num2 ");
    scanf("%d", &num2);
    printf("Enter the value of num3 ");
    scanf("%d", &num3);
    if(num1==num2== num3){
        printf("all three numbers are same");
    }else if(num1 >= num2 && num1 >=num3){
        printf("%d is the greatest", num1);
    }else if(num2 >= num1 && num2 >= num3){
        printf("%d is greatest", num2);
    }else if(num3 >= num1 && num3 >= num2){
        printf("%d is the greatest", num3);
    }
}
