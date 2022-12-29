#include <bits/stdc++.h>
using namespace std;

int numberOfZeros(int n)
{
  // base case
  if (n == 0)
    return 0;

  if (n % 10 == 0)
  {
    return numberOfZeros(n / 10) + 1;
  }

  return numberOfZeros(n / 10);
}

int main()
{

  cout << numberOfZeros(100000009);
}
