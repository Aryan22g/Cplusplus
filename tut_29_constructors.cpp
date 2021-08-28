#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(void);
    void printNum(){
        cout<<a<<" +i"<<b<<endl;
    }
};

Complex::Complex(void){
    a=10;
    b=8;
}

int main(){
    Complex c;
    c.printNum();

}