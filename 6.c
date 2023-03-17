#include <stdio.h>
// Problem -> 6

int main() {
  for (int row = 5; row >= 1; row--) {
    for (int col = 1; col <= 6 - row; col++) {
      printf("%d", row);
    }

    printf("\n");
  }
}