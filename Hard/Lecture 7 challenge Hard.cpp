/*
    Written by: AbdulKhaliq Alhassan. 2024-2-17
  
  Ask a user to enter an odd number N and print diamond pattern with N rows.
  
  How the code works:
    - Takes odd number from user, if it's even or n < 2, it asks again. 
    - Then prints '*' mulitplied by the odd numbers from 1 to N. 
    - To make them centered, it prints spaces before and after '*'
      calculated by N - i / 2.
*/

#include <iostream>
using namespace std;

int main() 
{
  cout << "Enter rows (odd): ";
  int num;
  cin >> num;

  while (num % 2 == 0 || num < 2) 
  {
    cout << "Invalid number\n";
    cout << "Enter rows (odd): ";
    cin >> num;
  }
  for (int i = 1; i < num; i += 2)
  {
    cout << string((num - i) / 2, ' ') << string(i, '*')
         << string((num - i) / 2, ' ') << '\n';
  }
  for (int i = num; i >= 1; i -= 2)
  {
    cout << string((num - i) / 2, ' ') << string(i, '*')
         << string((num - i) / 2, ' ') << '\n';
  }
  return 0;
}
