#include <iostream>

using namespace std;

int main() {
  int i = 0,j = 0;

  cout << "Enter no of rows of the matrix";
  cin >> i;
  cout << "Enter no of columns of the matrix";
  cin >> j;

  float l[i][j];

  int p = 0, q = 0;

  while (p < i) {
    while (q < j) {
      cout << "Enter the" << p + 1 << "*" << q + 1 << "entry";
      cin >> l[p][q];

      q = q + 1;
    }
    p = p + 1;
    q = 0;
  }
  cout << l;
return 0;
}

