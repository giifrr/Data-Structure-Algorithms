#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, sum = 0;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  cout << sum << endl;
}
