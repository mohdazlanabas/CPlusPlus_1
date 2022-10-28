#include "main.h"

int main() {

  cout << "Pointers." << endl;
  int x =5;
  cout << "x: " << x << endl;
    cout << "X Type: " << typeid(x).name() <<endl;
  int *y = &x;
  cout << y  << endl;
    cout << "Y Type: " << typeid(y).name() <<endl;

}
