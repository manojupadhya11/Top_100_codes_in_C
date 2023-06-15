//Program to print fibbonacci series up to nth term and to find nth fibonacci series term
#include<stdio.h>
int main(){

int a=0, b=1;
int nextTerm;
int n = 10;
printf("%d %d ",a,b);
for(int i =2; i<n; i++){
 nextTerm = a+b;
 a = b;
 b = nextTerm;
 printf("%d ",nextTerm);
}
return 0;
    }