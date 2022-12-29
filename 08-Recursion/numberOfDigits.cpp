#include <bits/stdc++.h>
using namespace std;

int numberOfDigits(int n)
{
  // base case
  if (n == 0)
    return 0;
  return numberOfDigits(n / 10) + 1;
}

int main()
{

  cout << numberOfDigits(10124);
  cout << numberOfDigits(0);
}
