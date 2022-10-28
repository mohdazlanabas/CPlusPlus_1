#include <iostream>
#include <fstream>
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
using std::ofstream;
using std::ifstream;
using std::ios;

// INPUT OUTPUT

void ifstream01();
void ofstream01();

int main() {
  ifstream01();
  ofstream01();
  return 0;
}

void ifstream01() {
  vector<string> names;

  ifstream file ("tacos.txt");
  string input;

  while(file >> input){
    names.push_back(input);
  }
  for (string name : names)
{
    cout<< name << " ";
  }
  file.close();
}

void ofstream01() {
  ofstream file ("hello.txt", ios::app);
  if (file.is_open()) {
    cout << "success noob\n" << endl;
  }
 //  file << "Test Text Saying Hello. 1\n";
   //file << "Test Text Saying Hello. 2\n";

}
