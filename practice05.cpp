#include <iostream>
#include <cmath>
#include <float.h>
#include <string>
#include <typeinfo>
#include <vector>
#include <array>
using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;
using std::fixed;
using std::string;
using std::vector;
using std::array;
#include "p05.h"

int main() {

  int a = 10;
  int b = 20;
  swap(a,b);
    cout << "From Int Main\n";
    cout << "a: " << a << "\tb: " << b << "\n";

    string first_name = "Azlan";
    string last_name = "Abas";
        swap(first_name, last_name);
cout << "From Int Main\n";
cout << "a: " << first_name << "\tb: " << last_name << "\n";

cout << pow (3,3) << endl;

return 0;
}
