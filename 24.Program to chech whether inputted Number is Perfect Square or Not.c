//Program to chech whether inputted Number is Perfect Square or Not
#include<stdio.h>
#include<math.h>
int isPerfectSquare(double x){
    if(x>0){
        long sr = sqrt(x);
        return (sr*sr == x); 
    }
    return 0;
}
int main()
{
    double x;
    printf("Enter a Number to check whether it is a Perfect Square or Not ");
    scanf("%lf",&x);
    if(isPerfectSquare(x)==1)
        printf("%lf is a Perfect Square Number",x);
    else
        printf("%lf is not a Perfect Square Number",x);
    
    return 0;
}
