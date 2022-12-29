#include <bits/stdc++.h>
using namespace std;

int numSpecial(vector<vector<int>> &mat)
{
  int res = 0;
  for (int i = 0; i < mat.size(); i++)
  {
    // untuk horizontal
    for (int j = 0; j < mat[i].size(); j++)
    {
      int temp1 = 0, temp2 = 0;
      if (mat[i][j] == 1)
      {
        // untuk horizontal
        for (int k = 0; k < mat[i].size(); k++)
          temp1 += mat[i][k];

        for (int k = 0; k < mat.size(); k++)
          temp2 += mat[k][i];
      }
      if (temp1 == 1 && temp2 == 1)
        res++;
    }
  }

  return res;
}

int main()
{
  vector<vector<int>> mat = {{0, 0, 1, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 1, 0, 0}};
  int res = numSpecial(mat);
  cout << res;
}
