//Program to find prime numbers in the given range
#include<stdio.h>
int isprime(int num){
    if(num<2){
        //0 1 2 and negative numbers are not prime
        return 0;
        }else{
            // no need to run loop till num-1 as for any number x the numbers in
            // the range(num/2 + 1, num) won't be divisible anyways. 
            // Example 36 wont be divisible by anything b/w 19-35
           int x = num/2;
            for(int i = 2; i <= x; i++){
                if(num%i == 0){
                    return 0;
                }
            }
        }
        // the number would be prime if we reach here
        return 1;
}
int main(){
    int num1, num2 =0;
    printf("Enter the range start number");
    scanf("%d",&num1);
        printf("Enter the range end number");
    scanf("%d",&num2);
    for(int i = num1; i<num2; i++){
        if(isprime(i)){
            printf("%d\t",i);
        }
        
    }
    return 0;
}
