/*
  Problem: https://leetcode.com/problems/find-the-difference-of-two-arrays/

*/

#include <bits/stdc++.h>
using namespace std;

// this is bad code because the time complexity is O(n^2), this is using brute force thecnique so you only iterate nums1 and iterate nums2 and then check if element in nums1 not in nums2 and vice cersa.
set<int> solve(vector<int> num1, vector<int> num2)
{
  set<int> temp1;

  for (int i = 0; i < nums1.size(); i++)
  {
    bool flag = true;
    for (int j = 0; j < nums2.size(); j++)
    {
      if (nums1[i] == nums2[j])
      {
        flag = false;
        break;
      }
    }

    if (flag)
    {
      temp1.insert(nums1[i]);
    }
  }

  return temp1;
}

vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
  // cek nums1 ke nums2
  vector<vector<int>> res;
  set<int> temp1, temp2;

  temp1 = solve(nums1, nums2);
  temp1 = solve(nums2, nums1);

  vector<int> atemp1(temp1.begin(), temp1.end());
  vector<int> atemp2(temp2.begin(), temp2.end());
  res.push_back(atemp1);
  res.push_back(atemp2);
  return res;
}

// =================================================Better Solutions ================================================

// better approach use undordered_set because it has a time complexity of O(1) on average for all operations
vector<vector<int>> findDifference2(vector<int> &nums1, vector<int> &nums2)
{
  unordered_set<int> temp1(nums1.begin(), nums1.end()), temp2(nums2.begin(), nums2.end());

  vector<int> distinct_num1, distinct_num2;

  // iterate temp1
  for (auto &&v : temp1)
  {
    if (temp2.count(v) == 0) // count method in unordered_set has O(1) time complexity
    {
      distinct_num1.push_back(v);
    }
  }

  // iterate temp2
  for (auto &&v : temp2)
  {
    if (temp1.count(v) == 0)
    {
      distinct_num2.push_back(v);
    }
  }

  return {distinct_num1, distinct_num2};
}

int main()
{
  cout << "hello world";
}
