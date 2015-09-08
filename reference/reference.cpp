#include <stdio.h>

int main(){
  int integer = 0;
  int& reference = integer;
  int* point = &integer;

  printf("TEST origin point = %p\n", &integer);
  printf("TEST reference point = %p\n", &reference);

  printf("TEST: reference = %d\n", reference);
  printf("TEST: point = %p\n", point);

  reference = 1;
  printf("TEST: operated reference x = %d\n", integer);
  integer = 0;

  *point = 2;
  printf("TEST: operated point x = %d\n", integer);

  return 0;
}
