//Program to find given number prime or not
#include<stdio.h>
int main(){
    int num, count =0;
    printf("Enter the number to check whether it is prime or not ");
    scanf("%d",&num);
    for(int i = 1; i <=num; i++){
        if(num%i == 0){
            count += 1;
            
        }
    }
    if(count>2){
        printf("%d is not a prime number", num);
    }else {
        printf("%d is prime number", num);
    }
    return 0;
}