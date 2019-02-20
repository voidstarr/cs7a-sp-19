#include <iostream>

using namespace std;

int main() {
  int num1, num2, num3;

  cout << "Enter Three Numbers with a Space in Between: ";

  cin >> num1 >> num2 >> num3;

  int smallest;

  if (num1 > num2) {
    if (num2 > num3) {
      smallest = num3;
    } else {
      smallest = num2;
    }
  } else {
    if (num1 > num3) {
      smallest = num3;
    } else {
      smallest = num1;
    }
  }

  cout << "num " << smallest << " is the smallest" << endl;
}
