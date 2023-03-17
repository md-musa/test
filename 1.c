#include <stdio.h>
// Problem -> 1

int main() {
  for (int row = 1; row < 5; row++) {
    for (int col = 1; col <= row; col++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}

// hello