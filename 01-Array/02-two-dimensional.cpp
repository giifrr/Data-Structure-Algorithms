#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int row, col;
  cin >> row >> col;
  int arr[row][col];

  // input matriz row wise
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
      cin >> arr[i][j];

    cout << endl;
  }

  // print matrix row wise
  cout << "Row wise \n";

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }

    cout << endl;
  }

  // print matriz col wise
  cout << "Col wise: \n";

  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cout << arr[j][i] << " ";
    }

    cout << "\n";
  }

  return 0;
}
