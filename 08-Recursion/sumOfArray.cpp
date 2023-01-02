#include <bits/stdc++.h>
using namespace std;

int sumOfArray(vector<int> &nums, int n)
{
  if (n == -1)
    return 0;
  return sumOfArray(nums, n - 1) + nums[n - 1];
}

int main()
{
  vector<int> nums = {2, 3, 4, 5, 6};
  int res = sumOfArray(nums, nums.size());
  cout << res;
}
