#include <stdio.h>

typedef union {
  int  i;
  float f;
} u_u;  // �ۭq�u�p�X�v���A�A�R�W��u_u�C

int main() {
  u_u data;    // �ŧi�ۭq���u�p�X�v���A�ܼ�
  data.i = 86;   // �]�wunion�ܼƪ�i�����]��ƭȡ^
  printf("i: %d\n",data.i);
  data.f = 3.14;  // �]�wunion�ܼƪ�f�����]�B�I�ȡ^
  printf("f: %g\n",data.f);  // Ū���B�I������
  printf("i: %d\n",data.i);  // Ū����Ʀ�����
}
