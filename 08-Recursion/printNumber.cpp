#include <bits/stdc++.h>
using namespace std;

void printNumber(int n)
{
  if (n == 0)
    return;
  printNumber(n - 1);
  cout << n << " ";
}

int main()
{
  printNumber(10);
}
