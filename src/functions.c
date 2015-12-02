#include <stdio.h>
#include <assert.h>

/*
  variables can be used in different ways or they can belong to different types

  - auto: default behaviour
  - extern: informs the compiler the variable is located outside the function
    int num = 1;

    int return_extern() {
      extern int num;

      return num;
    }
  - static: static variables will persist across the program.
  - register: these vars are stored in the microprocessor, making them more accesible.
  - volatile: Tells the compiler this variable can be modified umpredictable, using for
    programs that would be affected by external sources.
*/

/*
  We can declare a proto to tell the compiler
  we will intent to define this func later on our code
*/
int func_one(int); // params type are mandatory but names are optional (int num)
int use_glob_func();
int error_local_var();
void change_glob_var();
int glob_var = 3;

int main() {
  int num = 0;
  int func_num = func_one(num);
  int main_local_var = 7;

  assert(num == 0); // therefore num remains 0
  assert(func_num == 1); // but the copied incremented valued increased 1
  assert(use_glob_func() == 3); // glob_func has access to glob_var

  change_glob_var();
  assert(glob_var == 4);
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

/*
  it can access variables on the scope above
  and modify it's value
*/
void change_glob_var() {
  glob_var = 4;
}
