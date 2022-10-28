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

// TEMPLATE & OVERLOADING

template<typename T>
int swap (T a[], T b[], int size) {
  for (int i =0; i < size; i++)
    {
    T temp = a[i];
    a[i] = b[i];
    b[1] = temp;
    }
}

int main() {

     int SIZE = 6;
     int nines[] = {9,9,9,9,9,9};
     int ones[] = {1,1,1,1,1,1};

    for (int i = 0; i < SIZE; i++)
     {
      cout << nines[i] << " " << ones[i] << "\t";
    }
    cout << "\n\n";

    swap(nines, ones, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
    cout << nines[i] << " " << ones[i] << "\t";
    }
    cout << "\n\n";

    return 0;
}