//Program for expressing a Number as sum of two prime Numbers
#include<stdio.h>
int sum_of_two_prime_numbers(int n){
    int i, isprime = 1;
    for(i = 2; i <=n/2; ++i){
        if(n % i == 0){
            isprime = 0;
            break;
        }
    }
    return isprime;
}
int main(){
    int i,n;
    printf("Enter the Number");
    scanf("%d",&n);
    int flag = 0;
    for(i = 2; i<=n/2; ++i){
        if(sum_of_two_prime_numbers(i) == 1){
            if(sum_of_two_prime_numbers(n-i)==1){
                printf("%d can be expressed as sum of %d and %d ",n,i,n-i);
                flag = 1;
            }
        }
    }
    if(flag ==0){
        printf("%d can not be expressed as sum of two prime numbers",n);
    }
    return 0;
}
