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
// int myFunction(int x, int y) {
//   return x + y;
// }

// int main() {
//   int z = myFunction(5, 3);
//   cout << z;
//   return 0;
// }

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}
