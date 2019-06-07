#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
  string mystr ("1024");
  int myint;
  // Converts the mystr to a string stream that is pipe to int myint
  // This is similar to cin >> myint
  // do note that if the value of mystr or cin is not a valid number myint would not be set
  stringstream(mystr) >> myint;

  cout << myint << endl;
}