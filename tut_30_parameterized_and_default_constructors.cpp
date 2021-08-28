#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printNum()
    {
        cout << a << " +j" << b << endl;
    }
};
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    //implicit call
    Complex c1(4, 3);
    //explicit call
    Complex c2 = Complex(6, 9);
    c1.printNum();
    c2.printNum();
}