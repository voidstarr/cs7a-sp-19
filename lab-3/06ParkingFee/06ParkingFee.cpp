#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
  double hours, fee;
  
  cout << "PARKING FEE AT PSP"
       << endl
       << "------------------"
       << endl
       << endl
       << "Enter the number of hour the car is parked ";
  
  cin >> hours;
  
  if (hours >= 0 && hours <= 3) {
    fee = 5;
  } else if (hours > 3 && hours <= 9) {
    fee = 6 * ((int)hours + 1);
  } else if (hours > 9 && hours <= 24) {
    fee = 60;
  } else {
    cout << "Bad input." << endl;
  }

  cout << "Please pay: $" << setprecision(2) << fee << endl;

}
