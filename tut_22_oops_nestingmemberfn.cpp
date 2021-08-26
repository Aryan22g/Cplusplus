//oops: classes and objects
// c++ --> initially called --> c with classes by stroutstrop
// class-->>extension of structures in C
// struct had limitations-->
//                          1.members are public
//                          2. No methods
// classes --> tructure+more
// classes --> can have methods and properties
// classes --> can make few members as private or as public
//structures in c++ are typedef
// you can declare objects along with class declaration
/*class Employee{
        // classdefinition
    } harry, rohan, lovish;*/
// hary.sal=8 makes no sense if sal is private

//nesting of member  fn

#include <iostream>
#include <string>
using namespace std;

class binary
{
    //private:
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onescomplement(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::onescomplement(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}

void binary::display(void)
{
    cout << "Diplaying your binary numbers" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    b.onescomplement();
    b.display();

    return 0;
}