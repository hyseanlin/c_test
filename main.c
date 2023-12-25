#include <stdio.h>

typedef union {
  int  i;
  float f;
} u_u;  // 自訂「聯合」型態，命名為u_u。

int main() {
  u_u data;    // 宣告自訂的「聯合」型態變數
  data.i = 86;   // 設定union變數的i成員（整數值）
  printf("i: %d\n",data.i);
  data.f = 3.14;  // 設定union變數的f成員（浮點值）
  printf("f: %g\n",data.f);  // 讀取浮點成員值
  printf("i: %d\n",data.i);  // 讀取整數成員值
}
