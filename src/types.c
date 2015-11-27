#include <stdio.h>
#include <assert.h>

int main() {

  // char type
  // usually 8 bits (1 byte)
  char default_char; // char == signed char
  signed char signed_char; // any values from -128 to 127
  unsigned char unsigned_char; // any values from 0 to 255

  // int type
  // usually 16-32 bits (2-4 bytes)
  int default_int; // int == signed int
  signed int signed_int; // any value from -32768 to 32767
  unsigned int unsigned_int; // any value from 0 to 65535

  // short int type
  // usually 8-16 bits (1-2 byte)
  short int default_short_int; // short int == signed short int
  signed short int signed_short_int; // any value from -128 to 127
  unsigned short int unsigned_short_int; // any value from 0 to 255

  // long int type
  // usually 32-64 bits (4-8 bytes)
  long int default_long_int; // long int == signed long int
  signed long int signed_long_int; // any value from -2147483648 to 2147483647
  unsigned long int unsigned_long_int; // any value from 0 to 42949667295

  // float type
  // usually 32-64 bits (4-8 bytes) about 6 precition digits
  float default_float;

  // double type
  double default_double; // usually 64 bits (8 bytes) about 12 precition digits
  long double default_long_double; // usually 128 bits (16 bytes) about 24 precition digits

  assert(sizeof(default_char) == 1);
  assert(sizeof(default_int) == 2 || sizeof(default_int) == 4);
  assert(sizeof(default_short_int) == 1 || sizeof(default_short_int) == 2);
  assert(sizeof(default_long_int) == 4 || sizeof(default_long_int) == 8);
  assert(sizeof(default_float) == 4 || sizeof(default_float) == 8);
  assert(sizeof(default_double) == 8 || sizeof(default_double) == 8);
  assert(sizeof(default_long_double) == 16);

}
