#include <stdio.h>
#include <stdlib.h>  // ���tmalloc()�ŧi
#include <string.h>  // ���tmemset()�ŧi

void printArray(int arr[], int size) {
  for (int i=0; i<size; i++)
    printf("%d ", arr[i]);
}

int main() {
  int n = 3;
  int *arr = (int*)malloc(n*sizeof(int));
  memset(arr, 0, n*sizeof(int));   // �qarr��}��J0�A�@n�Ӿ�Ƥj�p�C
  printArray(arr, n);
}
