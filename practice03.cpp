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

// VECTORS AND STRUCTS

int vector01();
void print_vector(vector<int> data);
void struct01();

// public private protected
// struct by default public
// class by default private

int main () {

vector01();

vector<int> data = {0,1,2,3,4,5,6,7,8,9};
print_vector(data);
cout << endl;
int data2[] = {0,1,2,3,4,5,6,7,8,9};

// Range Loop specific use for Array, Vecor, STL array
// Use inside same function
for (int n: data2)
  {
  cout << n << " ";
}

struct01();

    return 0;
}

void struct01() {

struct User {
  string first_name;
  string last_name;
  int age;
  string status = "Gold";
  // method
  string get_status() {
    return status;
  }

};

    User user1;
    user1.first_name = "Azlan";
    user1.last_name = "Abas";
    user1.age = 50;
    user1.status = "Active";

    cout << "\nFirst Name: " << user1.first_name << endl;
    cout << "Last Name: " << user1.last_name << endl;
    cout << "Age: " << user1.age << endl;
    cout << "Status: " << user1.status << endl;
}

void print_vector(vector<int> data) {
    for (int i = 0; i < data.size(); i ++)
      {
      cout << data[i] << " ";
    }
}

int vector01() {

    vector<int> data = {0,1,2,3,4,5,6,7,8};
      data.push_back(9);
      cout << data[9] << endl;
      cout << data[data.size()-1]  << endl;
      data.pop_back();
      cout << data[data.size()-1]  << endl;

  return 0;
}