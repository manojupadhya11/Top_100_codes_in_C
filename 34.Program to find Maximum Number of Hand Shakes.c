//Program to find Maximum Number of Hand Shakes
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of People in a Room ");
    scanf("%d",&n);
    int total = (n*(n-1))/2;
    printf(" %d people in a room, Total Number Hand Shakes = %d", n,total);
    return 0;
}