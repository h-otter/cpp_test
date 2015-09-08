#include <stdio.h>
#include <vector>

class TestStaticClass{
public:
  static int static_var_;
  int var_ = 0;
};

int TestStaticClass::static_var_ = 0;

int main(){
  std::vector<TestStaticClass> test(3);

  for (int i = 0; i < 3; i++){
    printf("TEST: test[%d].var_ = %d\n", i, test[i].var_);
    test[i].var_ = i;
    printf("TEST: test[%d].var_ = %d\n", i, test[i].var_);
  }

  test[0].static_var_ = 100;

  for (int i = 0; i < 3; i++){
    printf("TEST: test[%d].static_var_ = %d\n", i, test[i].static_var_);
  }

  return 0;
}
