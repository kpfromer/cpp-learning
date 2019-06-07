#include <iostream>
using namespace std;
// ;)
namespace MySpace {
  int value() { return 5; }
}

namespace other {
  const double pi = 3.1416;
  double value() { return 2 * pi; }
}

namespace third {
  int get() { return 10; }
}

// Renaming
// namespace new_name = current_name;

int main () {
  using MySpace::value;
  using namespace third; // global for all

  cout << "MySpace using value" << value() << endl;
  cout << "third value" << get() << endl;

  cout << "MySpace " << MySpace::value() << " other " << other::value() << endl; 
}