#include <bits/stdc++.h>
using namespace std;

bool isPresent(vector<int> &nums, int n, int key)
{
  if (n == -1)
    return false;
  if (nums[n - 1] == key)
    return true;
  isPresent(nums, n - 1, key);
}

int main(int argc, char const *argv[])
{
  vector<int> nums = {3, 1, 3, 6, 8, 12};
  bool check = isPresent(nums, nums.size(), 30);
  cout << check;
  return 0;
}
