//Program to find the prime factors of the inputted Number
#include<stdio.h>
void primefactor(int num){
    printf("Prime factor of %d is: ", num);
    for(int i =2; num > 1; i++){
        while(num % i == 0){
            printf("%d ", i);
            num /= i;
        }
    }
}
int main(){
 int num =0;
 printf("Enter a Number to find its prime factor ");
 scanf("%d",&num);
 primefactor(num);
 return 0 ;
    

}