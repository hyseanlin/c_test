#include <stdio.h>
#include <stdlib.h>

int main() {
  int *pt = malloc(sizeof(int));
  *pt = 345;            // �b�ʺA�t�m���Ŷ����s�J���
  printf("�ʺA�t�m�Ŷ����x�s�ȡG%d\n", *pt);
  free(pt);             // ����O����Ŷ�
  printf("�Ŷ����񤧫�G%d\n", *pt);
}
