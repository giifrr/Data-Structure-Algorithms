#include <bits/stdc++.h>
using namespace std;

bool isSortedArray(vector<int> &arr, int n)
{
  if (n == 0)
    return true;

  if (arr[n - 1] < arr[n - 2])
    return false;
  return isSortedArray(arr, n - 1);
}

int main()
{
  vector<int> arr = {2, 3, 4, 10, 4, 5, 7};
  cout << isSortedArray(arr, arr.size()) << endl;
}
