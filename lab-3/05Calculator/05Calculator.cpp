#include <iostream>

using namespace std;

int main() {
  int num1, num2;
  char op;

  cout << "CALCULATOR" << endl << "----------" << endl;
  
  cin >> num1 >> op >> num2;
  
  cout << endl;

  int result;

  switch (op) {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 == 0) {
      cout << "ERROR!!! Division by ZERO" << endl;
      return -1;
    }
    result = num1 / num2;
    break;
  case '%':
    if (num2 == 0) {
      cout << "ERROR!!! Division by ZERO" << endl;
      return -1;
    }
    result = num1 % num2;
    break;
  }

  cout << num1 << " " << op << " " << num2 << " = " << result << endl;
}
