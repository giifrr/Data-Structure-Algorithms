#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "hello gifar"; // initialize string with value
  cout << str << endl;

  // input string from user
  // string str2;
  // cin >> str2;
  // cout << str2 << "\n";

  // using getline because cin can't enter space, tabs, and new line
  // string str3;
  // getline(cin, str3);
  // cout << str3 << endl;

  // you can using vector string to collect strings
  vector<string> str4;
  str4.push_back("Halo");
  str4.push_back("Semuanya!");
  str4.push_back("Saya gifar");

  for (int i = 0; i < str4.size(); i++)
  {
    cout << str4[i] << " ";
  }
  cout << endl;

  // built in function for string in c++
  // for knwoing length of string then use size() or length()

  string str5 = "Kamu siapa?";
  cout << str5.size() << " " << str.length() << endl;

  // find built in, if element not in string then return value is  garbage value
  string str6 = "Hello C++!";
  cout << str6.find("H") << " " << str6.find("+") << "\n";

  // substr(), for return substring from string
  string new_substr = str6.substr(3); // it will be returned a substring from index 3 untill the end of the string
  cout << new_substr << endl;

  string new_substr2 = str6.substr(2, 5); // it will be returned a substring from index 2 and until the substring has length 5
  cout << new_substr2 << endl;

  // you can concatenate string
  string a = "Hello", b = "Gifar";
  string c = a + b;
  cout << c << endl;

  // you can also change element of string
  string name = "Gifar";
  cout << name << endl;
  name[0] = 'J';
  cout << name << endl;

  // convert integer to string using to_string()
  int age = 22;
  string myAgeInString = to_string(age);
  cout << "Hello i'm " + myAgeInString + " Years old" << endl;

  // convert alpha numerice string to integer using atoi()
  string yourAge = "2223";
  int yourAgeInInt = atoi(yourAge.c_str());
  cout << yourAgeInInt * 100 << endl;

  return 0;
}
