#include<stdio.h>

void fun(int arr[]) {
 arr[0] = 100;
 }
 int main() {
 int arr[] = {1, 2, 3};
 fun(arr);
 printf("%d", arr[0]);
 }
