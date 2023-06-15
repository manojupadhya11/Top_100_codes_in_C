//Program to find the factors of the inputted Number
#include<stdio.h>
int main(){
 int num =0;
 printf("Enter a Number to find its factor ");
 scanf("%d",&num);
 for(int i = 1; i<=num;i++){
     if(num % i == 0){
         printf("%d,",i);
     }
 }
}