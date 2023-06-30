//Program to find LCM of Two numbers
#include<stdio.h>
int main()
{
    int num1,num2=0;
    printf("Enter a Number 1  ");
    scanf("%d",&num1);
    printf("Enter a Number 2  ");
    scanf("%d",&num2);
    int lcm;
    //finding largest in between num1 and num2
    int max = (num1 > num2)? num1: num2;

    //LCM will atleast be >= max(num1, num2)
    //largest possibility of LCM will be num1 and num2
    for(int i = max; i <= num1*num2; i++){
        if(i%num1==0 && i%num2 ==0){
            lcm = i;
            break;
        }
    }
    printf("LCM of %d and %d is :%d",num1,num2,lcm);
    return 0;
}
