#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  /*
  for (int i = 0, j = n - 1; i < j; i++, j--)
  {
    swap(arr[i], arr[j]);
  }
  */

  // or you can use while loop for solve this problem
  /*
  int i = 0, j = n - 1;
  while (i < j)
  {
    swap(arr[i], arr[j]);
  }
  */

  // you can also using the built in reverse method like this
  reverse(arr, arr + n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
