#include <stdio.h>

int ConstArg(const int x);
int ReferArg(int&);
int PointArg(int*);
int DefaultArg(int);


int main(){
  {
    int x = 0;
    ConstArg(x);
    printf("TEST: Const : x = %d\n", x);
  }

  {
    int x = 0;
    ReferArg(x);
    printf("TEST: Refer : x = %d\n", x);
  }

  {
    int x = 0;
    PointArg(&x);
    printf("TEST: Point : x = %d\n", x);
  }

  {
    int x = 0;
    DefaultArg(x);
    printf("TEST: Default : x = %d\n", x);
  }

  return 0;
}

int ConstArg(const int x){
//  x++;  // Errored

  return 0;
}

int ReferArg(int& x){
  x++;

  return 0;
}

int PointArg(int* x){
  (*x)++;

  return 0;
}

int DefaultArg(int x){
  x++;

  return 0;
}
