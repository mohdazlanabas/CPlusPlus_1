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

void ifstatement01();
void enum01();
void factorial01();
void dowhile01();
void continue01();
void tenary01();
void array01();
void print_array(int array[], int size);

int main() {

  ifstatement01();
  enum01();
  factorial01();
  // dowhile01();
  continue01();
  // tenary01();
  array01();

  int guesses3[] = {0,1,2,3,4,5,6,7,8,9};
  int size = sizeof(guesses3) / sizeof(int);
  print_array(guesses3, size);

  return 0;
}

void print_array(int array[], int size) {
  cout << "Size of array: " << size << endl;
  for(int i =0; i< size; i++)
    {
    cout << array[i] << " ";
    }
    cout << endl;
}

void array01(){
  int guesses[10] = {0,1,2,3,4,5,6,7,8,9};
  int guesses2[5];
  guesses2[0] = 1;
  cout << guesses << endl;
  cout << "Index in guess Array: " << guesses[3] << endl;
  int size = sizeof(guesses) / sizeof(guesses[0]);
  cout << "Size of guess Array: " << size << endl;
    for (int i = 0; i < size; i++)
      {
      cout << guesses[i] << " ";
      }
      cout << endl;
}

void tenary01() {
  int answer = 11;
  int guess;
  cout << "Guess a number. ";
  cin >> guess;
  // int points = guess == answer ? 10 : 0;
  guess == answer ? cout << "You gt it right" :  cout << "Its Wrong";
 // cout << "Your points are " << points << endl;
}


void continue01() {
  string sentence = "Hello World";
  for (int i =0; i< sentence.size(); i++) {
    if(sentence[i] == ' ')
      {
      continue;
    }
    cout << sentence[i];
  }
  cout << "\ndone" << endl;
}

void dowhile01() {
  string password = "Hello123";
  string guess;
  do {
    cout << "Guess the password." << endl;
    cin >> guess;
  }

  while(guess != password);
cout << "Yes, you got it right." << endl;;
}

void factorial01() {
    int fact = 2;
    int factorial = fact;
    for (int i = factorial-1; i > 0; i--)
      {
        factorial = factorial * i;
        cout << "i: " << i << " factorial: " << factorial << endl;
        }
        cout << "The factotial of " << fact << " is " << factorial << endl;
}

void enum01() {
enum seasons {summer, spring, winter, fall};
  seasons now = winter;
  switch(now) {
  case spring:
cout << "Enjoy the weather!" << endl;
        break;
  case winter:
cout << "Enjoy the snow!" << endl;
    break;
  case fall:
cout << "Enjoy the bloom!" << endl;
    break;
  case summer:
cout << "Enjoy the sun!" << endl;
    break;
    default:
    cout << "Not on earth" << endl;

  }
}

void ifstatement01() {
int age = 11;
if (age > 18)
    { cout << "You are an adult" << endl;
} else if ( age < 13)
{ cout << "You are a child" << endl;
} else
{ cout << "You are an adolescent" << endl;}

}