// Program to find  and print prime numbers between 1 and 100
#include<stdio.h>
int isprime(int num){
    if(num<2){
        return 0;
    }
    else{
        int x = num/2;
        for(int i = 2; i <=x; i++){
            if(num%i == 0){
                return 0; //not prime
            }
        }
    }
    return 1; // the number is prime if we reach here
}
int main(){
    int lower = 0, upper = 100;
    for(int i = lower; i<= upper; i++){
        if(isprime(i)){
            printf("%d ", i);
        }
    }
}