#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &nums)
{
  for (int i = 0; i < nums.size(); i++)
  {
    bool isSwap = false;

    for (int j = 0; j < nums.size() - 1; j++)
    {
      if (nums[j] > nums[j + 1])
      {
        swap(nums[j], nums[j + 1]);
        isSwap = true;
      }
    }

    if (!isSwap)
      break;
  }

  return nums;
}

int main()
{

  vector<int> nums = {3, 4, 5, 1, 2};
  bubbleSort(nums);

  for (auto &&i : nums)
  {
    cout << i << " ";
  }
}
