#include <bits/stdc++.h>
using namespace std;

int power(int m, int n)
{
  // base case
  if (n == 0)
    return 1;
  return m * power(m, n - 1);
}

int main()
{
  cout << power(3, 4);
}
