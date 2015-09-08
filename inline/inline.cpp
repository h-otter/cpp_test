#include <iostream>
#include <time.h>

#define FUNCTION_TIMES 10000

inline int InlineFunction(long long int);
static int StaticFunction(long long int);
const int ConstFunction(long long int);
int DefaultFunction(long long int);

int main(){
  long long int x;
  clock_t start, end;

  std::cout << "TEST; InlineFunction()\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    InlineFunction(x);
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  std::cout << "TEST; StaticFunction()\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    StaticFunction(x);
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  std::cout << "TEST; ConstFunction()\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    ConstFunction(x);
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  std::cout << "TEST; DefaultFunction()\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    DefaultFunction(x);
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  return 0;
}

inline int InlineFunction(long long int x){
  for (int i = 0; i < 100; i++);

  return 0;
}
static int StaticFunction(long long int){
  for (int i = 0; i < 100; i++);

  return 0;
}

const int ConstFunction(long long int){
  for (int i = 0; i < 100; i++);

  return 0;
}

int DefaultFunction(long long int){
  for (int i = 0; i < 100; i++);

  return 0;
}
