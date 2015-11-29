#include <stdio.h>
#include <assert.h>

/*
  We can declare a proto to tell the compiler
  we will intent to define this func later on our code
*/
int func_one(int); // params type are mandatory but names are optional (int num)
int use_glob_func();
int error_local_var();
int glob_var = 3;

int main() {
  int num = 0;
  int func_num = func_one(num);
  int main_local_var = 7;

  assert(num == 0); // therefore num remains 0
  assert(func_num == 1); // but the copied incremented valued increased 1
  assert(use_glob_func() == 3); // glob_func has access to glob_var
}

/*
  func definition
  params are passed as value not reference
  meaning that they will not change the variables
  outside the given function
*/
int func_one(int num) {
  num++;
  return num;
}

/*
  A function has access to all the variables declared
  over the scope of the function
*/
int use_glob_func() {
  return glob_var;
}

/*
  this function will throw an error if declared
  since main_local_var is not declared above the scope
  of this func declaration / definition

int error_local_var() {
  return main_local_var;
}
*/
