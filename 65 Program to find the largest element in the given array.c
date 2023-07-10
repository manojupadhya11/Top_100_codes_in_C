//Program to find the largest element in an array
#include<stdio.h>
int getlargest(int arr[], int len){
    int max = arr[0];
    for(int i = 0; i<len; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[] = {1,20,36,92,15,78,0,26,23,21,45,85};
    int len = sizeof(arr)/sizeof(arr[0]);
    int largest = getlargest(arr, len);
    printf("The largest element among the array is %d", largest);
    return 0;
}



