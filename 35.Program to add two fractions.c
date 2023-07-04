//Program to add two fractional numbers
#include<stdio.h>
int main()
{
    int numerator1, numerator2, denominator1, denominator2, x,y,c,gcd_no;
    printf("Enter the value for numerator1 ");
    scanf("%d",&numerator1);
    printf("Enter the value for denominator1 ");
    scanf("%d",&denominator1);
    printf("Enter the value for numerator2 ");
    scanf("%d",&numerator2);
    printf("Enter the value for denominator2 ");
    scanf("%d",&denominator2);
    //numerator
    x = (numerator1*denominator2)+(numerator2*denominator1);
    //denominator
    y = denominator1*denominator2;

    //Simplification to simplified fractions
    for(c=1; c<=x && c<= y; ++c){
        if(x%c==0 && y%c ==0){
            gcd_no = c;
        }
    }
    printf("  (%d/%d) + (%d/%d) = (%d/%d)", numerator1,denominator1,numerator2,denominator2,x/gcd_no,y/gcd_no);
    return 0;
}