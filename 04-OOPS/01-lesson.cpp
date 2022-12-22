#include <bits/stdc++.h>
#include "student.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  cout << "Create object" << endl;
  // create object statically
  Student s1(10, 100);
  s1.display();

  cout << "\nCopying object s1 to s2" << endl;

  // create object with copying s1 obeject
  Student s2(s1);
  s2.display();

  cout << "\nCreate object dynamically" << endl;

  // create objects dynamically
  Student *s4 = new Student(11, 110);
  s4->display();

  cout << "\nCopying dynamically oeject s4 to s3" << endl;

  // create dynamically copy object from s4
  Student *s3 = new Student(*s4);
  s4->display();

  // if object is already created then we just simply use assignment (=)
  Student s5(100, 1000);

  cout << "\nCopy s1 to s5 with copy assigment" << endl;
  // copy s1 to s5 object
  s5 = s1;

  s5.display();

  // if you wnat to delete dynamic object then use delete keyword instead
  delete s3;
  return 0;
}
