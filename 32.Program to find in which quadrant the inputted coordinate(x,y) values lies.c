//Program to find in which quadrant the inputted coordinate(x,y) values lies
#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter value of X ");
    scanf("%d",&x);
    printf("Enter value of Y ");
    scanf("%d",&y);
    if(x > 0 && y > 0){
        printf("(%d,%d) lies in First Quadrant",x,y);
    }
    else if(x < 0 && y > 0){
        printf("(%d,%d) lies in Second Quadrant",x,y);
    }
    else if(x < 0 && y < 0){
        printf("(%d,%d) lies in Third Quadrant",x,y);
    }
    else if(x > 0 && y < 0){
        printf("(%d,%d) lies in Fourth Quadrant",x,y);
    }
    else if(x == 0 && y == 0){
        printf("(%d,%d) lies on the Origin ",x,y);
    }
    else if(x =! 0 && y == 0){
        printf("(%d,%d) lies in X Axis",x,y);
    }
    else if(x == 0  && y != 0){
        printf("(%d,%d) lies in Y Axis",x,y);
    }
    return 0;
}