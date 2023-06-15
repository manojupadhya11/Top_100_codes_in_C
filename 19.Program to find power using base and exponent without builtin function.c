//Program to find power using base and exponent without builtin function
#include<stdio.h>
int main(){
    float base = 2.0;
    int exp = -4;
    double result = 1.0;
    printf("the %f Power of %d is: ",base,exp);
    //below code for when exp is a positive int value
    while(exp>0){
        result *= base;
        --exp;
    }
    //below code for when exp is a negative int value
    while(exp<0){
        result /= base;
        ++exp;
    }
 printf("%lf ",result);
}