#include <bits/stdc++.h>
using namespace std;

int multiplication(int m, int n)
{
  if (n == 0)
    return 0;
  return m + multiplication(m, n - 1);
}

int main()
{
  cout << multiplication(4, 5);
}
