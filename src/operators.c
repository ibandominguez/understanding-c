#include <stdio.h>
#include <assert.h>

int main() {

  int num;

  assert(num = 1 == 1);
  assert(num + 1 == 2);
  assert(num - 1 == 0);
  assert(num++ == 1);
  assert(num == 2);
  assert(++num == 3);
  assert(num == 3);
  assert(num-- == 3);
  assert(num == 2);
  assert(--num == 1);
  assert(num == 1);
  assert((num += 1) == 2);
  assert((num -= 1) == 1);
  assert((num *= 2) == 2);
  assert((num /= 2) == 1);

  assert(2 > 1);
  assert(2 >= 2);
  assert(2 < 3);
  assert(3 <= 3);
  assert(3 == 3);
  assert(3 != 4);

  assert(1 > 2 || 2 > 1);
  assert(1 == 1 && 2 == 2);
  assert(!1 == 0);

}
