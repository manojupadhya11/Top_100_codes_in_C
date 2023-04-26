//Program to find greatest of two numbers
#include<stdio.h>
int main(){
    int num1, num2 =0;
    printf("Enter the value of num1 ");
    scanf("%d", &num1);
    printf("Enter the value of num2 ");
    scanf("%d", &num2);
    if(num1==num2){
        printf("Both are equal");
    }else if(num1>num2){
        printf("%d is the greatest", num1);
    }else{
        printf("%d is greatest", num2);
    }
    
    
    
}
