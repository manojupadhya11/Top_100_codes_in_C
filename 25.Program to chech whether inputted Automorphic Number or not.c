//Program to chech whether inputted Number Automorphic Number or Not
#include<stdio.h>

int isAutoMorphic(int x){
    int square = x * x;
    
    if(x%10 != square%10){
        return 0;
    }
    
    //reducing the number
    x /= 10;
    square /= 10;
    
    return 1;
}
int main()
{
    int x;
    printf("Enter a Number to check whether it is an Automorphic Number or Not ");
    scanf("%d",&x);
    int square = x *x;
    if(isAutoMorphic(x))
        printf("num: %d, square: %d  is an AutoMorphic Number",x,square);
    else
        printf("num: %d, square: %d  is not an AutoMorphic Number",x,square);
    return 0;
}
