#include<iostream>
using namespace std;

int main(){
    //What is a pointers???----> it is a datatatype which holds the address of other datatypes
    int a=46;
    int* b= &a;
    // &----> (address of )operaator
    // here b is a pointer storing addresss of a
    cout<<"The Address of a is: "<<b<<endl;
    cout<<"The Address of a is: "<<&a<<endl;
    
    // *-----> (value at)it is dereferencing operator
    cout<<"The value at Address of b is: "<<*b<<endl;

    //pointer to pointer;(stores address of a pointer)
    int** c=&b;
    cout<<"The value of  b is: "<<c<<endl;
    cout<<"The value of  b is: "<<&b<<endl;
    cout<<"The value at address c is: "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;
    return 0;
}