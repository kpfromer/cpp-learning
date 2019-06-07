#include <iostream>

using namespace std;

// void increase (void* data, int psize)
// {
//   if ( psize == sizeof(char) )
//   { char* pchar; pchar=(char*)data; ++(*pchar); }
//   else if (psize == sizeof(int) )
//   { int* pint; pint=(int*)data; ++(*pint); }
// }

int addition (int a, int b)
{ return (a+b); }

int subtraction (int a, int b)
{ return (a-b); }

// Functional programming!
int operation (int x, int y, int (*functocall)(int,int))
{
  int g;
  g = (*functocall)(x,y);
  return (g);
}

int main () {
  int myvar = 1;
  int foo = myvar; // foo = 1
  int* myvarAddr = &myvar; // myvarAddr = the address of myvar in memory
  int baz = *myvarAddr; // baz = 1 (* will go the memory address and get its value)
  baz++;
  cout << myvar << endl; // Unchanged
  cout << baz << endl; // Changed
  (*myvarAddr)++;
  cout << myvar << endl; // myvar is changed

  int numbers[5];
  int * p;
  p = numbers;  *p = 10; // p = numbers = address of the first value 
  p++;  *p = 20;
  p = &numbers[2];  *p = 30;
  p = numbers + 3;  *p = 40;
  p = numbers;  *(p+4) = 50;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
  cout << endl;
  // prints "10, 20, 30, 40, 50,"

  // char *mychar; // 1 byte
  // short *myshort; // 2 bytes
  // long *mylong; // 4 bytes

  // cout << mychar << endl;
  // cout << myshort << endl;
  // cout << mylong << endl;

  // ++mychar;
  // ++myshort;
  // ++mylong;

  // cout << mychar << endl;
  // cout << myshort << endl;
  // cout << mylong << endl;
  // Notice that mychar is at the original + 1;
  // Notice that myshort is at the original + 2;
  // Notice that mylong is at the original + 4;
  // This is due to the number of bytes each data types takes up.
  // I thought that 64 bit machines would have 64 bit memory address but they DONT
  // Most machines are byte addressed, meaning they store data in memory that is smaller than the bus! (https://en.wikipedia.org/wiki/Byte_addressing) (https://stackoverflow.com/questions/43600956/do-64-bit-architectures-memory-addresses-still-hold-1-byte)
  // How do 64 bit cpu's work with 8 bit memory address: https://softwareengineering.stackexchange.com/questions/363370/how-does-a-cpu-load-multiple-bytes-at-once-if-memory-is-byte-addressed 

  // *p++ = *q++;
  // Is the same as below since the ++ is postfix
  // *p = *q;
  // ++p;
  // ++q;

  // there are void pointers, meaning a pointer that points to a value that has no type and thus has an undetermined length and undertermined properties)
  // char a = 'x';
  // int b = 1602;
  // increase (&a,sizeof(a));
  // increase (&b,sizeof(b));
  // cout << a << ", " << b << '\n';

  // A null pointer is a value that any pointer can take to represent that it is pointing to "nowhere"

  // Functional programming
  int m, n;
  int (*minus)(int, int) = subtraction;

  m = operation(7, 5, addition); // 12
  n = operation(20, m, minus); // 8
  cout << n << endl;
}