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

double pow(double base, int pow = 2) {
int total = 1;
for (int i = 0; i < pow; i++) {
  total *= base;
}
return total;
}

// PASS BY REFERENCE

void swap(int &a, int &b)
{
int temp = a;
a = b;
b = temp;
cout << "From Swap Func\n";
cout << "a: " << a << "\tb: " << b << "\n";
}

void swap (string a, string b){
string temp = a;
a = b;
b = temp;
cout << "From Swap Func\n";
cout << "a: " << a << "\tb: " << b << "\n";
}