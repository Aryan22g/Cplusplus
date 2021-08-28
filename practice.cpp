#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    void setNum(int n1, int n2){
        a=n1;
        b=n2;
    }
    friend Complex sumNum(Complex o1, Complex o2);
    void printNum(){
        cout<<a<<" +i"<<b<<endl;
    }
};

Complex sumNum(Complex o1, Complex o2){
    Complex o3;
    o3.setNum((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    // int a, b;
    // cin>>a>>b;
    // int c, d;
    // cin>>c>>d;
    // cout<<a<<" + i"<<b<<" and "<<c<<" + i"<<d<<endl;
    // cout<<a+c<<" + i"<<b+d<<endl;

    Complex a,b,sum;
    a.setNum(3,5);
    a.printNum();
    b.setNum(4,6);
    b.printNum();

    sum=sumNum(a,b);
    sum.printNum();


}