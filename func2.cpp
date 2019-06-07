#include <iostream>

using namespace std;

// Function overloading is a thing
int operate(int a, int b) {
  return a * b;
}

double operate(double a, double b) {
  return a / b;
}

// Generics in c++ are called function templates
template <class Type>
Type sum (Type a, Type b) {
  return a + b;
}

// Non-type template arguments
template <class T, int V>
T scalar(T val) {
  return val * V;
}

int main() {
  cout << "First call " << operate(4, 2) << endl;
  cout << "Second call " << operate(4.0, 2.0) << endl;
  cout << "Generic call" << sum<int>(1, 2) << endl;
  cout << "Generic call (implied type) " << sum(1.0, 2.0) << endl;
  cout << "Non-type template call " << scalar<int, 10>(2) << endl;
}