/* print all the  prefixes and  sufixes from the input string
  example:
  input s = abcd
  first prefix = [a, ab, abc, abcd]
  last prefix = [d, cd, bcd, abcd]
*/

#include <bits/stdc++.h>
using namespace std;

void firstPrefix(string str)
{
  string temp = "";
  for (int i = 0; i < str.size(); i++)
  {
    temp += str[i];
    cout << temp << "\n";
  }
}

void suffixes(string str)
{
  string temp = "", res = "";
  for (int i = 0; i <= str.size(); i++)
  {
    temp = str[str.size() - i];
    res = temp + res;
    cout << res << "\n";
  }
}

int main(int argc, char const *argv[])
{
  string str;
  cin >> str;

  firstPrefix(str);
  cout << "\n";
  suffixes(str);
  return 0;
}
