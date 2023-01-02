// diketahui arr = [1,1,2,6,3,1,7], key = 1 cetak semua index elemen key di array arr!

#include <bits/stdc++.h>
using namespace std;

void printAllPositions(vector<int> &nums, int i, int key)
{
  if (i == nums.size())
    return;
  if (nums[i] == key)
    cout << i << " ";
  printAllPositions(nums, i + 1, key);
}

vector<int> storeAllPositions(vector<int> &nums, int i, int key, vector<int> &res)
{
  if (i == nums.size())
    return res;
  if (nums[i] == key)
    res.push_back(i);
  return storeAllPositions(nums, i + 1, key, res);
}

int main(int argc, char const *argv[])
{
  vector<int> nums = {1, 1, 2, 6, 3, 1, 7};
  printAllPositions(nums, 0, 1);
  cout << "\n";
  vector<int> res = {};
  storeAllPositions(nums, 0, 1, res);
  for (auto &&i : res)
  {
    cout << i << " ";
  }

  return 0;
}
