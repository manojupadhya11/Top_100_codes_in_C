//Program to find the second smallest element in the given array
#include<stdio.h>
#include<limits.h>
int getsecondsmallest(int arr[], int len){
    int smallest = arr[0];
    for(int i = 1; i<len; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        } 
    }
    int sec_smallest = INT_MAX;
    for(int i = 0; i<len; i++){
        if(arr[i]!=smallest && arr[i]<sec_smallest){
            sec_smallest = arr[i];
        }
    }
    printf("The Second Smallest element in the array is %d",sec_smallest);
}
int main(){
    int arr[] = {1,20,36,92,15,78,1,26,23,21,45,85};
    int len = sizeof(arr)/sizeof(arr[0]);
    getsecondsmallest(arr, len);
    return 0;
}



