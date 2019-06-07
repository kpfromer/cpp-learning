#include <iostream>
#include <string>

using namespace std;

int main() {
  const int max = 10;
  int x = 0;

  while (x <= max) {
    if (x == 0) {
      cout << "X is " << x << endl;
    } else if (x == 1) {
      cout << "Positive" << endl;
    } else {
      cout << "Negitive" << endl;
    }
    x++;
  }

  x = 0;

  for (; x <= max; x++) {
    cout << "X is " << x << endl;
  }

  // For each (like java)
  string word = "kpfromer";
  for (char s : word) {
    cout << s << endl;
  }
  // Not like java is the keyword 'auto' (type inference)
  for (auto c : word) {
    cout << c << endl;
  }

  // There is break, continue, switch, but also goto (nice!)
  int n = 0;
  customLabel:
  cout << n << ", ";
  n--;
  if (n > -max) goto customLabel;
  cout << "DONE" << endl;
}