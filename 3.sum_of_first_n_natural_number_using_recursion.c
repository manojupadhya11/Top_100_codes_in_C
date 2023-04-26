//Program to calculate the sum of first n natural numbers using recursion
#include<stdio.h>
//function definition
int getsum(int sum, int num){
    if(num == 0)
        return sum;
    return num+getsum(sum, num-1);
};
//drive code
int main(){
    printf("Enetr a number ");
    int num, sum = 0;
    scanf("%d", &num);
    
    printf("%d", getsum(sum, num));
    return 0;

}
    