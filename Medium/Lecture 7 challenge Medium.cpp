/*
  Written by: AbdulKhaliq Alhassan. 2024-2-1
  
  Asks a user to enter a number and check whether it is a prime number or not.
*/


#include <iostream>
using namespace std;

int main()
{
  
  cout << "Enter Number: ";
  int num;
  cin >> num;

  bool isPrime = true;
  
  if (num <= 1)  // 1 or less is not a prime number
      isPrime = false;
  
  // Check from 2 to n-1
  // if any number divides n with zero remainder, then n is not prime.
  for (int i = 2; i <= num / 2; i++)  
  {
      if (num % i == 0)
          isPrime = false;

  }
  if(isPrime == true)
    cout << "Prime Number";
  else
    cout << "Not a Prime Number";


  return 0;
}
