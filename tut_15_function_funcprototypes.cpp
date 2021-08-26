#include<iostream>
using namespace std;

//function prototype
// type function-name (arguments)
// int sum(int a, int b);  ----> acceptable
// int sum(int a,  b);  ----> NOT acceptable
int sum(int,int);  //----> acceptable
void g(void);
// void g(); ---> acceptable
int main(){
    int num1,num2;
    // cout<<"Enter first number"<<endl;
    // cin>>num1;
    // cout<<"Enter second number"<<endl;
    // cin>>num2;

    //num1 and num2 are actual parameters
    // cout<<"The sum of num1 And num2 is "<<sum(num1, num2);
    g();
    return 0;
}

// int sum(int a, int b){
//     //formal parameters a and b will take values from actual parameters num1 and num2
//     int c = a+b;
//     return c;
// }

void g(){
    cout<<"Hello, Good Morning";
}