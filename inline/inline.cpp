#include <iostream>
#include <time.h>

#define FUNCTION_TIMES 1000000

inline int InlineFunction();
inline int InlineFunction(long long int);
static int StaticFunction();
static int StaticFunction(long long int);
const int ConstFunction();
const int ConstFunction(long long int);
int DefaultFunction();
int DefaultFunction(long long int);

int main(){
  long long int x;
  clock_t start, end;

  std::cout << "TEST: InlineFunction()\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    InlineFunction();
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  std::cout << "TEST: StaticFunction()\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    StaticFunction();
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  std::cout << "TEST: ConstFunction()\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    ConstFunction();
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  std::cout << "TEST: DefaultFunction()\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    DefaultFunction();
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  std::cout << "TEST: InlineFunction(long long int)\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    InlineFunction(x);
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  std::cout << "TEST: StaticFunction(long long int)\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    StaticFunction(x);
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  std::cout << "TEST: ConstFunction(long long int)\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    ConstFunction(x);
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  std::cout << "TEST: DefaultFunction(long long int)\n";
  start = clock();

  for (int i = 0; i < FUNCTION_TIMES; i++){
    DefaultFunction(x);
  }

  end = clock();
  std::cout << "duration = " << (double)(end - start) / CLOCKS_PER_SEC << "sec.\n";

  return 0;
}

inline int InlineFunction(){
  for (int i = 0; i < 100; i++);

  return 0;
}

inline int InlineFunction(long long int x){
  for (int i = 0; i < 100; i++);

  return 0;
}

static int StaticFunction(){
  for (int i = 0; i < 100; i++);

  return 0;
}

static int StaticFunction(long long int x){
  for (int i = 0; i < 100; i++);

  return 0;
}

const int ConstFunction(){
  for (int i = 0; i < 100; i++);

  return 0;
}

const int ConstFunction(long long int x){
  for (int i = 0; i < 100; i++);

  return 0;
}

int DefaultFunction(){
  for (int i = 0; i < 100; i++);

  return 0;
}

int DefaultFunction(long long int x){
  for (int i = 0; i < 100; i++);

  return 0;
}
