/*
  Written by: AbdulKhaliq Alhassan. 2024-2-18

  Asks a user to enter a number and print multiplication tables
  from 2 up to that number.

*/

#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter number of tables up to: ";
  cin >> num;

  for (int i = 2; i <= num; i++) {
    cout << "Multiplication table of " << i << ":\n"; // print table header
    for (int j = 1; j <= 10; j++) // print table body from 1 to 10
    {
      cout << ' ' << i * j;
    }
    cout << '\n';
  }

  return 0;
}