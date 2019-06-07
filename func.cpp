#include <iostream>

using namespace std;

// a and b are copied values from who ever calls it.
int add(int a, int b) {
  return a + b;
}

// a, b, c are int references
void duplicate (int& a, int& b, int& c) {
  a*=2;
  b*=2;
  c*=2;
}

// This is slower because in runtime a and b have to be copied to new address then added.
// string concatenate (string a, string b) {
//   return a+b;
// }

// this just directly adds the values from the references
// string concatenate (string& a, string& b) {
//   return a+b;
// }

// But this is even better, because const enforces that a and b are not modified
// This is done at compile time (https://stackoverflow.com/questions/27048025/is-variable-defined-by-const-int-determined-at-compilation-time)
// this function is marked inline, meaning that when the compiler finds it's usage it replaces the function call with the function body.
// for simple functions this increases speed since runtime doesnt have to do a function call.
// NOTE: most compilers "already optimize code to generate inline functions when they see an opportunity to improve efficiency, even if not explicitly marked with the inline specifier."
inline string concatenate (const string& a, const string& b) {
  return a+b;
}

// Default values
string printName(string name = "default") {
  return "Hello " + name;
}

// Main's output is implictly 0;
// Each exit code represents a status code (like unix based systems)
// 0 = successful
// 1 = error
int main() {
  cout << "1 + 2 = " << add(1,2) << endl;

  int x = 1, y = 2, z = 3;
  duplicate(x, y, z);
  cout << "x=" << x << ", y=" << y << ", z=" << z << endl;

  // EXIT_FAILURE defined as 1
  // exit(1) = return 1; in the main program (exit can be used else where)
}

// // declaring functions prototypes
// #include <iostream>
// using namespace std;

// This allows for main to call odd and even which are defined below main
// void odd (int x);
// void even (int x);

// int main()
// {
//   int i;
//   do {
//     cout << "Please, enter number (0 to exit): ";
//     cin >> i;
//     odd (i);
//   } while (i!=0);
//   return 0;
// }

// void odd (int x)
// {
//   if ((x%2)!=0) cout << "It is odd.\n";
//   else even (x);
// }

// void even (int x)
// {
//   if ((x%2)==0) cout << "It is even.\n";
//   else odd (x);
// }