#include<iostream>
using namespace std;

class Complex{
    int a, b;
    friend 
    public:
    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

class Calculator{
    public:
    int add(int a, int b){
        return (a+b);
    }
    int sumComplex(Complex o1,Complex o2){
        return (o1.a+o2.a);
    }
}



int main(){
    Complex c1,c2,sum;
    c1.setNumber(4,6);
    c1.setNumber(3,7);
    c1.printNumber();
    c2.printNumber();

    sum=sumComplex(c1,c2);
    sum.printNumber(); 
    return 0;
}

