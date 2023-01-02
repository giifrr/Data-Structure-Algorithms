// diberikan array arr = {5, 6, 5, 5, 73, 2, 5}, key = 5 maka banyak bilangan key pada arr adalah 4

#include <bits/stdc++.h>
using namespace std;

int countOccurenceElement(vector<int> &nums, int i, int key)
{
  if (i == nums.size())
    return 0;
  if (nums[i] == key)
    return countOccurenceElement(nums, i + 1, key) + 1;
  return countOccurenceElement(nums, i + 1, key);
}

int main(int argc, char const *argv[])
{
  vector<int> nums = {5, 6, 5, 5, 73, 2, 5};
  int result = countOccurenceElement(nums, 0, 0);
  cout << result;
  return 0;
}
