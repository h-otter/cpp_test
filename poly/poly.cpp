#include <iostream>
#include <vector>
#include <memory>

class BasedClass{
public:
  virtual int Show() = 0;

  virtual ~BasedClass(){}
};

class ChildClass : public BasedClass{
public:
  int Show();
  static std::shared_ptr<ChildClass> create();
};

/*
int BasedClass::Show(){
  std::cout << "TEST: BasedClass.Show()" << std::endl;

  return 0;
}
*/

int ChildClass::Show(){
  std::cout << "TEST: ChildClass.Show()" << std::endl;

  return 0;
}

std::shared_ptr<ChildClass> ChildClass::create(){
  return std::shared_ptr<ChildClass>(new ChildClass);
}

int main(){
  std::vector<std::shared_ptr<BasedClass>> vector_based;

  vector_based.push_back(ChildClass::create());

  vector_based[0]->Show();

  return 0;
}
