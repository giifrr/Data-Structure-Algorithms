#include <bits/stdc++.h>
using namespace std;

class Fraction
{
private:
  int numerator;
  int denumerator;

public:
  // create constructor
  Fraction(int numerator, int denumerator)
  {
    this->numerator = numerator;
    this->denumerator = denumerator;
  }

  // setter
  void setNumerator(int numerator)
  {
    this->numerator = numerator;
  }

  void setDenumerator(int denumerator)
  {
    this->denumerator = denumerator;
  }

  // getter
  int getNumerator()
  {
    return numerator;
  }

  int getDenumerator()
  {
    return denumerator;
  }

  // other function

  void print()
  {
    cout << this->numerator << "/" << this->denumerator << "\n";
  }

  void add(Fraction const &f2)
  {
    this->numerator = (this->numerator * f2.denumerator + this->denumerator * f2.numerator);
    this->denumerator = (this->denumerator * f2.denumerator);

    simplify();
  }

  void multiply(Fraction const &f2)
  {
    this->numerator = this->numerator * f2.numerator;
    this->denumerator = this->denumerator * f2.denumerator;

    simplify();
  }

  void simplify()
  {
    int gcd = __gcd(this->denumerator, this->numerator);

    cout << (this->numerator / gcd) << "/" << (this->denumerator / gcd) << endl;
  }

  ~Fraction(){

  };
};

int main()
{
  Fraction f1(1, 2);
  Fraction f2(1, 2);
  // f1.add(f2);
  f1.multiply(f2);
}
