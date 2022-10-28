//using namespace std;
#include <iostream>
#include <cmath>
#include <float.h>
#include <string>
#include <typeinfo>
using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;
using std::fixed;
using std::string;

// DECLARATIONS
void test1();
int multiply1(int, int);
void loop1();
int datatypes01 ();
int escape01();
bool bool01();
float float01();
int const01();
int numeric01();
void string01();
void stringmod01();
void literals01();

int main () {

  cout << multiply1(3.0,3.0) << endl;
  test1();
  loop1();
  datatypes01();
  escape01();
  bool01();
  float01();
  const01();
  numeric01();
  string01();
  stringmod01();
  literals01();

  // CLOSING BRACKETS
  return 0;
}

void literals01() {
    cout << "LITERALS" << endl;
    char m = 'm';
    cout << "char " << m << endl;
    auto n = 50.0;
    auto o = 50.0F;
    cout << "Type of m: " << typeid(m).name() << endl;
    cout << "Type of n: " << typeid(n).name() << endl;
    cout << "Type of n: " << typeid(o).name() << endl;
}

void stringmod01() {
    cout << "STRINGS MODIFIER" << endl;
    string greeting04 = "Hello, There. ";
    cout << "length " << greeting04.length() << endl;
    cout << "size " << greeting04.size() << endl;
    cout << "size " << greeting04.size() << endl;
    cout << "append " << greeting04.append("How Are You.") << endl;
    cout << "insert " << greeting04.insert (13, " ...... ") << endl;
    // cout << "erase " << greeting04.erase (3, 2) << endl;
    cout << "erase " << greeting04.erase (12) << endl;
    cout << "substr " << greeting04.substr(7, 5) << endl;
    cout << "find " << greeting04.find("Are") << endl;
    cout << "find first " << greeting04.find_first_of("aeiou") << endl;
    cout << greeting04 << endl;
    if (greeting04 == "Hello, There")
        {
            cout << "Equals" << endl;
        }
}

void string01() {
  cout << "STRINGS" << endl;
  string greeting = "String Greeting";
  cout << greeting << endl;
  cout << greeting[0] << endl;
  cout << greeting + " and more" << endl;
  string greeting2 = greeting += ", ";
  cout << greeting2 << endl;
  string greeting3 = greeting2 + "And More!.";
  cout << greeting3.length() << endl;
}

int numeric01() {
  cout << "NUMERIC FUNCTIONS" << endl;
  cout << "sqrt 25 is " << sqrt(25) << endl;
  cout << "pow 3 3 is " << pow(3,3) << endl;
  cout << "NAN " << NAN << endl;
  cout << "INFINITY " << INFINITY << endl;
  cout << "Remainder 5 / 2 is " << remainder(5,2) << endl;
  cout << "Modulus 10 / 3 is " << (10 % 3) << endl;
  cout << "fmin 10 vs 100 is " << fmin(10.25,100) << endl;
  cout << "fmax 10 vs 100 is " << fmax(10.25,100) << endl;
  cout << "ceil 10 vs 100 is " << ceil(fmin(10.25,100)) << endl;
  cout << "floor 10 vs 100 is " << floor(fmin(10.25,100)) << endl;
  return 0;
  // others: trunc, round,
}

int const01() {
  cout << "CONST AND ENUMS" << endl;
  const int k = 5; // immutable
  cout << "const k is " << k << endl;
enum {l = 100}; // immutable
  cout << "enum l is " << l << endl;
  return 0;
}

float float01() {
  cout << "FLOATING NUMBERS" << endl;
  float f =  10.0/3;
  cout << "float " << f << endl;
  f = f * 1000000/3;
  cout << "float * " << f << endl;
  cout << fixed << "float fixed " << f << endl;
  cout << FLT_DIG << " float h flt " << f << endl;
  cout << DBL_DIG << " float h dbl " << f << endl;
  double g = 7E5;
  cout << "double " << g << endl;
  long double h;
  cout << "long double " << h << endl;
  return 0;
}

bool bool01() {
    cout << "BOOL DATATYPE" << endl;
    bool found = true;
    cout << boolalpha << found << endl;
    return 0;
}

int escape01() {
    cout << "ESCAPE SEQUENCE" << endl;
    // cout << "Hello, \a -Escape! a." << endl;
    cout << "Hello, \b -Escape! b." << endl;
    cout << "Hello, \n -Escape! n." << endl;
    cout << "Hello, \t -Escape! t." << endl;
    cout << "Hello, \v -Escape! v." << endl;
    return 0;
}

int datatypes01 () {
    cout << "DATA TYPES" << endl;
    char e = 'F';
    short a;
    int b;
    long c;
    long long d;
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;
    cout << e << " is " << (int) e  << endl;
    return 0;
}

void loop1() {
  int n = 5;
  for (int i = 0; i < n; i++)
    {
    cout << i << endl;
  }
}

int multiply1( int x ,int y) {
  double power = pow(x,y);
  return power;
}

void test1() { // definition
// object > operator > operand
cout << "Hello!, World!\n";
int slices = 5;
int slices2;
slices2 = 6;
int slices3 = slices + slices2;
cout << slices << endl;
cout << slices2 << endl;
// cout << slices + slices2;
int slices4 = slices3;
cout << slices4 << endl;
cout << "You have " << slices4 << " slices of pizza." << endl;
printf("%i\n", slices4); // alternative
int slices5;
cout << "How many Pizza would you like ?\n";
// cin >> slices5;
// cout << "You ordered " << slices5 << " number of pizza.\n";
int result1 = pow(slices, slices2);
cout << result1 << endl;
}

// END OF PROGRAM