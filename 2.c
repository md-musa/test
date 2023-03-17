#include <stdio.h>
// Problem -> 2

int main() {
    for (int row = 1; row < 5; row++) {
    for (int col = 1; col <= 5 - row; col++) {
      printf(" ");
    }

    for (int star = 1; star <= row; star++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}