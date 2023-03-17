#include <stdio.h>
// Problem -> 7

int main() {
  for (int row = 1; row <= 5; row++) {
    for (int i = 1; i <= row; i++) {
      printf("%d", i);
    }

    printf("\n");
  }
}