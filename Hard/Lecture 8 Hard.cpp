/*
  Written by: AbdulKhaliq Alhassan. 2024-2-18

  Using break statement, write a program to find and print all pairs
  of numbers whose sum is equal to a given number.

*/

#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter target sum: ";
  cin >> num;
  
  cout << "Pairs of numbers whose sum is " << num << ":\n";

  int i = 1;
  while(i < num) {
    for(int i = 1; i < num; i++) {
      cout  << "(" << i << ", " << num - i << ")\n";
    
    }
  break;  // Deleting this will make infinite loop
  }
  
  return 0;
}