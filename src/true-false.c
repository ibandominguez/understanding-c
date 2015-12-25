#include <stdio.h>
#include <assert.h>

int main() {

  // In c, zero is falsy
  // everything else is truthy
  char string[] = "helloworld";
  char char_a = 'a';
  int helper = 0, zero = 0, ten = 2;
  float dec = 3.012;
  double dou = 3.34534534534534534;

  if (char_a) helper++;
  assert(helper == 1);

  if (zero) helper++;
  assert(helper == 1);

  if (ten) helper++;
  assert(helper == 2);

  if (dec) helper++;
  assert(helper == 3);

  if (dou) helper++;
  assert(helper == 4);

  if (1) helper++;
  assert(helper == 5);

  if (0) helper++;
  assert(helper == 5);

  /** String is a pointer therefore will always
    evaluate to true
    if (string) helper++;
    assert(helper == 6);
  */

}
