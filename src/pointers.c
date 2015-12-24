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

  // arrays and pointers
  // an array var is a pointer to its
  // first element, if we increment it then 
  // we will get the address of the next element and so on
  int arr = { 1, 2 };
  assert(arr[0] == *arr);
  assert(arr[1] == *(arr + 1));
}
