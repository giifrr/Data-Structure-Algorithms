#include <bits/stdc++.h>
using namespace std;

class Student
{

private:
  int age;
  int rollNumber;

public:
  // constructor
  Student(int age, int rollNumber)
  {
    this->age = age;
    this->rollNumber = rollNumber;
  }

  void display()
  {
    cout << age << " " << rollNumber;
  }

  // this is getter function
  int getAge()
  {
    return age;
  }

  int getRollNumber()
  {
    return rollNumber;
  }

  // this is setter function
  void setAge(int userAge)
  {
    age = userAge;
  }

  void setRollNumber(int userRollNumber)
  {
    rollNumber = userRollNumber;
  }

  // destructor only efect if object using static object
  ~Student()
  {
    cout << "Destroyed" << endl;
  }
};
