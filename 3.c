#include <stdio.h>
// Problem -> 3

int main() {
    for (int row = 1; row <= 5; row++) {
    for (int i = 1; i <= 5 - row; i++) {
      printf(" ");
    }

    for (int star = 0; star < (row * 2) - 1; star++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}