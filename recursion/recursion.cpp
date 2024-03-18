#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
int mult(int j){
  if (j > 0){

    return j + mult(j-1);
  }else{
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result <<endl;
int multi = mult(4);
cout << multi <<endl;
  return 0;
}