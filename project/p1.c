#include <stdio.h>
#include <stdlib.h>

int main() {
  fprintf(stderr, "p1 sending numbers to p2\n");
  for (int i = 2; i < 101; i++) {
    printf("%d\n", i);
  }
  fprintf(stderr, "sending end\n");
  printf("%d\n",-1);
}