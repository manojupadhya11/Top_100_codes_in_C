//Program to find the Smallest and largest element in an array
#include<stdio.h>
int getsmalllarge(int arr[], int len){
    int smallest = arr[0];
    int largest = arr[0];
    for(int i = 1; i<len; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
        if(arr[i>largest]){
            largest = arr[i];
        }
    }
    printf("The largest element in the array is %d\n", largest);
    printf("The Smallest element in the array is %d",smallest);
}
int main(){
    int arr[] = {1,20,36,92,15,78,1,26,23,21,45,85};
    int len = sizeof(arr)/sizeof(arr[0]);
    getsmalllarge(arr, len);
    return 0;
}



