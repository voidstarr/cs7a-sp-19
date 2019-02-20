#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  string color1, color2;

  cout << "Primary Colors are RED, BLUE, YELLOW" << endl
       << "____________________________________" << endl
       << endl
       << "Enter two primary colors: ";

  cin >> color1 >> color2;

  transform(color1.begin(), color1.end(), color1.begin(), ::toupper);
  transform(color2.begin(), color2.end(), color2.begin(), ::toupper);

  string result;

  if (color1 == "BLUE") {
    if (color2 == "YELLOW") {
      result = "Green";
    } else if (color2 == "RED") {
      result = "Purple";
    } else {
      cout << "Bad input. Try again!" << endl;
      return -1;
    }
  } else if (color1 == "YELLOW") {
    if (color2 == "BLUE") {
      result = "Green";
    } else if (color2 == "RED") {
      result = "Orange";
    } else {
      cout << "Bad input. Try again!" << endl;
      return -1;
    }
  } else if (color1 == "RED") {
    if (color2 == "YELLOW") {
      result = "Orange";
    } else if (color2 == "BLUE") {
      result = "Purple";
    } else {
      cout << "Bad input. Try again!" << endl;
      return -1;
    }
  } else {
    cout << "Bad input. Try again!" << endl;
    return -1;
  }

  cout << "Mixing " << color1 << " and " << color2 << " makes " << result
       << endl;
}
