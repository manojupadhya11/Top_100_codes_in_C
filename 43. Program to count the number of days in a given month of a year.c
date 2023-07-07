// Program to count the number of days in a given month of a year
#include<stdio.h>
int main(){
    int year, month;
    printf("Enter a year ");
    scanf("%d", &year);
    printf("Enter month number ");
    scanf("%d",&month);
    if((month == 2) && ((year%400==0)||(year%100!=0)&&(year%4==0))){
        printf("Number of days is 29");
    }else if(month == 2){
        printf("Number of days is 28");
    }else if (month ==1||month ==3||month ==5||month==7||month==8||month==10||month ==12){
        printf("Number of days is 31");
    }else if(month ==4||month==6||month==9||month==11){
        printf("Number of days is 30");
    }
    return 0;
}
