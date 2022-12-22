#include <bits/stdc++.h>
using namespace std;

int main()
{
  // This approach is better in memoery safe than if we create an array
  int n;
  cin >> n;
  int infinite = numeric_limits<int>::min();

  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    if (num > infinite)
      infinite = num;
  }

  cout << infinite << endl;
}
