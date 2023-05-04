//Program to find given number prime or not(optimized way)
#include<stdio.h>
int main(){
    int num, isprime =0;
    printf("Enter the number to check whether it is prime or not ");
    scanf("%d",&num);
    int i = num;
    if(num<2){
        isprime = 0;
        break;
    }
    else{
        for(int i = 2; i < num; i++){
        if(num%i == 0){
            isprime = 1;
        }
    } 
    }

    if(isprime){
        printf("%d is not a prime number", num);
    }else {
        printf("%d is prime number", num);
    }
    return 0;
}