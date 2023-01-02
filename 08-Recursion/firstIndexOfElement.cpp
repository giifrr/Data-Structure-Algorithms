// Tentukan index pertama dari elemen di dalam array contoj arr = [5, 5, 3, 2, 11, 1, 2, 1] key = 1 maka index pertama dari elemen 1 adalah index ke 5

#include <bits/stdc++.h>
using namespace std;

int lastIndex(vector<int> &nums, int i, int key)
{
  if (i == -1)
    return -1;
  if (nums[i] == key)
    return i;
  lastIndex(nums, i - 1, key);
}

int firstIndex(vector<int> &nums, int i, int key)
{
  if (i == nums.size())
    return -1;
  if (nums[i] == key)
    return i;
  firstIndex(nums, i + 1, key);
}

int main(int argc, char const *argv[])
{
  vector<int> nums = {5, 5, 3, 2, 11, 1, 2, 1};
  int index = firstIndex(nums, 0, 5);
  cout << index << "\n";
  index = lastIndex(nums, nums.size(), 5);
  cout << index << "\n";
  return 0;
}
