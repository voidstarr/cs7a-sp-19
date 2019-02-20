#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

int main() {
  int num;

  cout << "Program Part 1 starts here" << endl
       << endl
       << "Enter a number between 1 - 999999: ";

  cin >> num;

  cout.imbue(locale(""));

  cout << fixed << "The number is: " << num << endl << endl;

  cin.ignore();

  string numString;
  cout << "Program Part 2 starts here" << endl
       << endl
       << "Enter a number between 1 - 999999: ";

  getline(cin, numString);

  if (numString.length() > 3) {
    numString.insert(numString.length() - 3, ",");
  }

  cout << "The number is: " << numString << endl;
}
