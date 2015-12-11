#include <stdio.h>
#include <assert.h>

int main() {
  int array[50]; // declared an array of 50 ints
  int nums[] = {1, 2, 3, 4, 5, 6}; // declare and array, size done on assigment

  // this is how we calculate the lenght of an array
  int nums_length = sizeof(nums) / sizeof(int);
  assert(nums_length == 6);
  assert(sizeof(nums) == sizeof(int) * 6);

  for (int i = 0; i < nums_length; i++) {
    printf("%d\n", nums[i]);
  }

  return 0;
}
