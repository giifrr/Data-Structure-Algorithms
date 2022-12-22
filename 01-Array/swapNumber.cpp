#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  // before swapping
  cout << a << " " << b << endl;

  int c = a;
  a = b;
  b = c;

  // or you can use built in swap method
  // swap(a, b);

  // after swapping
  cout << a << " " << b << endl;
}
