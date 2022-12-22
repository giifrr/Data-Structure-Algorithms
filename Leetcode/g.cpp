#include <bits/stdc++.h>
using namespace std;

double average(vector<int> &salary)
{
  int maxSalary = salary[0], minSalary = salary[0];

  for (int i = 0; i < salary.size(); i++)
  {
    maxSalary = max(maxSalary, salary[i]);
    minSalary = min(minSalary, salary[i]);
  }

  double averageSalary = 0, n = 0;

  for (int i = 0; i < salary.size())
  {
    if (salary[i] != maxSalary || salary[i] != minSalary)
    {
      averageSalary += salary[i];
      n++;
    }
  }

  return averageSalary / n;
}

int main(int argc, char const *argv[])
{
}
