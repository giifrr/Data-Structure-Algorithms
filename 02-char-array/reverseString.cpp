#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  string mystring;
  cin >> mystring;
  // this solution similar with reversing array problem

  reverse(mystring.begin(), mystring.end());
  cout << mystring << endl;

  return 0;
}
