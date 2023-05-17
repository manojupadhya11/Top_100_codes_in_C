//Program to find the reverseof number or make the given number reverse
#include<stdio.h>
int main(){
    int num = 0;
    printf("ENter a number");
    scanf("%d", &num);
    int rev, rem = 0;
    while(num != 0){
        rem = num%10;
        rev = rev*10 + rem;
        num /= 10;    
    }
    printf("The reverse of %d is %d",num, rev);
    
}