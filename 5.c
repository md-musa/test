#include <stdio.h>
// Problem -> 5

int main() {
    for (int row = 1; row <= 5; row++) {
    for (int i = 1; i <= row; i++) {
      printf("%d", row);
    }

    printf("\n");
  }
}