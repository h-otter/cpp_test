#include <stdio.h>

int DefaultFunction(int);
const int ConstFunction(int);
int FunctionConstArg(const int);
const int ConstFunctionConstArg(const int);
const int* ConstFunctionConstArgReturnPoint(const int);
int* PointFunction(int*);
int& ReferFunction(int&);

int main(){
  {
    int x = 0;
//    printf("TEST: DefaultFunction -> %d\n", DefaultFunction(x) = x + 1);
    printf("      x = %d\n", x);
  }

  {
    int x = 0;
//    printf("TEST: ConstFunction -> %d\n", ConstFunction(x) = x + 1);
    printf("      x = %d\n", x);
  }

  {
    int x = 0;
//    printf("TEST: FunctionConstArg -> %d\n", FunctionConstArg(x) = x + 1);
    printf("      x = %d\n", x);
  }

  {
    int x = 0;
//    printf("TEST: ConstFunctionConstArg -> %d\n", ConstFunctionConstArg(x) = x + 1);
    printf("      x = %d\n", x);
  }

  {
    int x = 0;
//    printf("TEST: ConstFunctionConstArgReturnPoint -> %d\n", *(ConstFunctionConstArgReturnPoint(x)) = x + 1);
    printf("      x = %d\n", x);
  }

  {
    int x = 0;
    printf("TEST: PointFunction -> %d\n", *(PointFunction(&x)) = x + 1);
    printf("      x = %d\n", x);
  }

  {
    int x = 0;
    printf("TEST: ReferFunction -> %d\n", ReferFunction(x) = x + 1);
    printf("      x = %d\n", x);
  }

  return 0;
}

int DefaultFunction(int x){
  return x;
}

const int ConstFunction(int x){
  return x;
}

int FunctionConstArg(const int x){
  return x;
}

const int ConstFunctionConstArg(const int x){
  return x;
}

//const int* ConstFunctionConstArgReturnPoint(const int x){
//  return &x;
//}

int* PointFunction(int* x){
  return x;
}

int& ReferFunction(int& x){
  return x;
}
