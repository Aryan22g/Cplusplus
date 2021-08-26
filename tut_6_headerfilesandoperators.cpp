#include <iostream>
//1. system header files: comes with compilier
//2. user defined files: written by programmar

//use cpp reference website in google search
using namespace std;

int main(int argc, char const *argv[])
{
    int a=34, b=43;
    cout<<"Operators in c++:"<<endl;
    cout<<"Following are the types of Operators in c++:"<<endl;
    // Arithemetic operator
    cout<<"a+b: "<<a+b<<endl;
    cout<<"a-b: "<<a-b<<endl;
    cout<<"a*b: "<<a*b<<endl;
    cout<<"a/b: "<<a/b<<endl;
    cout<<"a%b: "<<a%b<<endl;
    cout<<"a++: "<<a++<<endl;
    cout<<"a--: "<<a--<<endl;
    cout<<"++a: "<<++a<<endl;
    cout<<"--a: "<<--a<<endl;
    //asignment operator--used to asign values
    // int a=3;
    // char c='a';

    //comparison operator
    //==,>,>=,<,<=
    cout<<"a==b: "<<(a==b)<<endl;
    cout<<"a!=b: "<<(a!=b)<<endl;
    cout<<"a>b: "<<(a>b)<<endl;
    cout<<"a<b: "<<(a<b)<<endl;
    cout<<"a>=b: "<<(a>=b)<<endl;
    cout<<"a<=b: "<<(a<=b)<<endl;

    //logical operator- &&, ||, (!(a==b))
    cout<<"((a==b) && (a<=b)): "<<((a==b) && (a<b))<<endl;

    return 0;
}
