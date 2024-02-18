/*
  Written by: AbdulKhaliq Alhassan. 2024-2-18

  Using continue statement, write a program to print all numbers
  from 1 to 100 except multiples of 5.

  continue statement can be used to skip a part of the loop.

*/

#include <iostream>
using namespace std;

int main() {
  for(int i = 1; i <= 100; i++) {
    if(i % 5 == 0)
      continue;

    cout << i << ' ';
  }
  return 0;
}