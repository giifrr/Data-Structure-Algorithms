#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[10] = {1, 2}; // initialization array
  a[2] = 2;           // add element of array if element at index 2 not present, if present it will be change element of array at index 2

  // print the array using for loop
  for (int i = 9; i >= 0; i--)
  {
    cout << a[i] << " ";
  }

  // segmentation fault in array happened if element at index not present in array example:
  // array with index -1, because in c++ index can't be negative
  // array with size 10 but you are calling element of array with an index greater than 10
  // array with size greater than 10^5 or  10^6  depende from your machine

  int arr[10000000];
}
