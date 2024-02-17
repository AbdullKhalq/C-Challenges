/*
  Written by: AbdulKhaliq Alhassan. 2024-2-17

  This code asks a user to enter a number and print multiplication table of that
  number up to 10.
*/

#include <iostream>
using namespace std;

int main() 
{
  cout << "Enter number: ";
  int num;
  cin >> num;

  for (int counter = 1; counter <= 10; counter++) 
  {
    cout << num << " * " << counter << " = " << counter * num << "\n";
  }

  return 0;
}
