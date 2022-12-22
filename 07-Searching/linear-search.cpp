#include <bits/stdc++.h>
using namespace std;

// this algorithms have O(n) time complexity
int linearSearch(vector<int> &nums, int target)
{
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == target)
      return i;
  }

  return -1;
}

int main()
{
  vector<int> nums = {3, 4, 2, 1};

  cout << linearSearch(nums, 4);
}
