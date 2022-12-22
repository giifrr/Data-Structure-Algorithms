#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
  int low = 0, end = nums.size() - 1, mid;

  while (low <= end)
  {
    mid = (low + end) / 2;

    if (nums[mid] == target)
      return mid;
    else if (nums[mid] > target)
      end = mid - 1;
    else
      low = mid + 1;
  }

  return -1;
}

int main()
{
  vector<int> nums = {3, 4, 5, 6, 7};
  cout << binarySearch(nums, 4);
}
