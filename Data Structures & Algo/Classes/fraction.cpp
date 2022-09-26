#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class fraction
{
private:
    int numerator;
    int denominator;
public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void getNum
    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }
    void simplify()
    {
        int gcd = 1;
        for (int i = 1; i <= numerator && i <= denominator; i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                gcd = i;
            }
        }
        numerator /= gcd;
        denominator /= gcd;

    }
    fraction operator+(fraction const &f) // uses f1 + f2
    {
        int lcm = denominator * f.denominator;
        int num = (lcm / denominator) * numerator + (lcm / f.denominator) * f.numerator;
        fraction temp(num, lcm);
        temp.simplify();
        return temp;
    }

    fraction add(fraction const &f2){   // uses f1.add(f2)
        int lcm = denominator * f2.denominator;
        int num = (lcm / denominator) * numerator + (lcm / f2.denominator) * f2.numerator;
        numerator = num;
        denominator = lcm;
        simplify();
    }
    fraction(/* args */);
  
};


int main() 
{
    /*code*/
    return 0;

}