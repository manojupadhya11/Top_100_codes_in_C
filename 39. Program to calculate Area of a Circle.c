// Program to Calculate Area of a circle 
#include<stdio.h>
#include<math.h>
int main(){
    float area, r;
    float pi = 3.14;
    printf("Enter the Rasius of  the circle ");
    scanf("%f",&r);
    area = pi *r *r ;
    printf("Area of Circle is : %f", area);
    return 0;
}