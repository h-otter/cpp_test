#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> vec{1, 2, 3, 4, 5};
  vector<int>::iterator itr;

  itr = vec.begin();

  cout << "TEST: *itr = " << *itr << endl;
  cout << "TEST: *(itr++) = " << *(itr++) << endl;
  cout << "TEST: *itr = " << *itr << endl;
  cout << "TEST: *(++itr) = " << *(++itr) << endl;
  cout << "TEST: *itr = " << *itr << endl;
  cout << "TEST: *(itr + 1) = " << *(itr + 1) << endl;
  cout << "TEST: *itr = " << *itr << endl;
  cout << "TEST: *(itr + 2) = " << *(itr + 2) << endl;
  cout << "TEST: *itr = " << *itr << endl;
  cout << "TEST: *(itr - 1) = " << *(itr - 1) << endl;
  cout << "TEST: *itr = " << *itr << endl;

  return 0;
}
