//Program to find the Smallest element in an array
#include<stdio.h>
int getsmallest(int arr[], int len){
    int smallest = arr[0];
    for(int i = 0; i<len; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}
int main(){
    int arr[] = {1,20,36,92,15,78,1,26,23,21,45,85};
    int len = sizeof(arr)/sizeof(arr[0]);
    int smallest = getsmallest(arr, len);
    printf("The largest element among the array is %d", smallest);
    return 0;
}



