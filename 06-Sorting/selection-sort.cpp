#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    int temp = arr[i + 1], idx = i;
    for (int j = i + 1; j < arr.size(); j++)
    {
      if (temp >= arr[j])
      {
        idx = j;
        temp = arr[j];
      }
    }

    if (arr[i] > temp)
    {
      swap(arr[i], arr[idx]);
    }
  }

  return arr;
}

int main()
{
  vector<int> nums = {4, 3, 2, 1, -9};
  selectionSort(nums);

  for (auto &&i : nums)
  {
    cout << i << " ";
  }
}
