#include <iostream>
using namespace std;

int main()
{
  char name[100]; // initialize array char, array char different with other array, you can input directly using cin without for loop to input
  cout << "Enter your name: ";
  cin >> name;

  // char array will be automatically end if meet thr terminator \0
  cout << name << endl;

  // ex name = "gifar" it's actually writing as [g, i, f, a, r, \0]
  // rest of this array of char name will ne automatically garbage value
  cout << name[10] << endl;

  // if we add name[6] = "a" it's still written gifar as output
  name[10] = 'a';
  cout << name << endl;

  // if wechange name[1] = \o then g will be an output
  name[1] = '\0';
  cout << name << endl;

  // there are limitations if using cin, one of which is if we create array char with size 10 and the whole element is not contained a terminator
  // then the program will be crash or may not
  // other limitation if we usee cin is cin can't counter space, newline and tabs
  char example[10];
  cout << "Enter the example: ";
  cin >> example;
  cout << example << "\n";

  // so to counter this problem we use cin.getline()
  cout << "Enter your name again : " << endl;
  cin.getline(name, 10);
  cout << name << endl;
}
