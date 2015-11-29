#include <stdio.h>
#include <assert.h>

int change(int *num) {
  *num = 777;
  return 0;
}

int main() {
  int num = 0;
  change(&num);

  printf("%p\n", &num);
  printf("%d\n", *(&num));
}
