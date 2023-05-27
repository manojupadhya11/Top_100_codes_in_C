//Program to print all the Armstrong number in the given
#include<math.h>
#include<stdio.h>
int order(int x){
    int length = 0;
    while(x){
        length++;
        x = x/10;
    }
    return length;
}
int getArmstrong(int low, int high ){
    
    for(int num = low; num <=high; num++){

        int len = order(num);
        int temp,sum =0;
        temp = num;
        while(temp!=0){
            int digit= temp%10;  
            sum =sum+pow(digit,len);
            temp = temp/10;
        };
        if(sum == num){
            printf("%d,", sum);
        }
    }   
}
int main(){
    int low, high = 0;
    printf("Enter a low range value");
    scanf("%d", &low);
    printf("Enter a high range value");
    scanf("%d", &high);
    getArmstrong(low, high);
}