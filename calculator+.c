#include <stdio.h>
int main() {
  float a, b, res;
  char choose;
  char cont = 'y';
  while (cont == 'y') {
    printf("continue?\n");
    scanf(" %c", &cont);
    if (cont != 'y') {
      break; // добавлен после того как цикл не завершался после ввода !=y,
             // спросил у нейросети
    }
    printf("a and then b\n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("choose+-/*\n");
    scanf(" %c", &choose);
    switch (choose) {
    case '+':
      res = a + b;
      printf("res :%.3f\n", res);
      break;
    case '-':
      res = a - b;
      printf("res:%.3f\n", res);
      break;
    case '/':
      if (b == 0.00f)
        printf("err\n");
      else {
        res = a / b;
        printf("res :%.3f\n", res);
        break;
      case '*':
        res = a * b;
        printf("res:%.3f\n", res);
        break;
      }
    }
  }
}
