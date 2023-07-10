//Program to Calculate sum of element in an Array
#include<stdio.h>

int getsum(int arr[], int len){
    int sum = 0;
    for(int i = 0; i<len; i++){
        sum = sum+arr[i];
    }
    printf("The total sum of elements in the array is %d",sum);
}
int main(){
    int arr[] = {1,20,36,92,15,78,1,26,23,21,45,85};
    int len = sizeof(arr)/sizeof(arr[0]);
    getsum(arr, len);
    return 0;
}



