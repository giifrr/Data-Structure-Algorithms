#include <bits/stdc++.h>
using namespace std;

int lenght(char myString[])
{
  int i = 0, len = 0;
  while (myString[i] != '\0')
  {
    i++;
    len++;
  }

  return len;
}

int main()
{
  char myString[1000];
  cout << "Enter the string...\n";
  cin >> myString;
  cout << "Length of this string is ";

  int lenString = lenght(myString);
  cout << lenString << "\n";
  return 0;
}
