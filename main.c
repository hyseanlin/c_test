#include <stdio.h>
#include <stdlib.h>  // 內含malloc()宣告
#include <string.h>  // 內含memset()宣告

void printArray(int arr[], int size) {
  for (int i=0; i<size; i++)
    printf("%d ", arr[i]);
}

int main() {
  int n = 3;
  int *arr = (int*)malloc(n*sizeof(int));
  memset(arr, 0, n*sizeof(int));   // 從arr位址填入0，共n個整數大小。
  printArray(arr, n);
}
