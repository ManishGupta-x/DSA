#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A(int i = 0) { a = i; }
    ~A() { cout << a << " "; }
};

class D
{
    int a;

public:
    D(int i = 0) { a = i; }
    ~D() { cout << a << " "; }
};

class B: public A, public D
{
    A b;
    D d;
    int a;

public:
    B(int i = 0) : D(0), A(i) { a = i; }
    ~B() { cout << a << " "; }
};

A a(1);

void fun()
{
    static A a(0);
}

int main()
{
    B d(1);
    fun();
    return 0;
}