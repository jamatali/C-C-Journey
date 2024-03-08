#include <stdio.h>
#include <iostream>
using namespace std;

// void myFunction (string x = "10") {
//     cout << "This is My First C++ Function" << " " << x <<endl;
// }
// int main () {
//     myFunction("20");
//     return 0;
// }
// int myFunction(int x, int y) {
//   return x + y;
// }

// int main() {
//   cout << myFunction(5, 3);
//   return 0;
// }
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
  cout << z;
  return 0;
}
