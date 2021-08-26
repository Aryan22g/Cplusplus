#include<iostream>
using namespace std;
int factorial(int n){
    if (n<=1)
    {
        return 1;
    }    
    return n*factorial(n-1);
}
// fibonacci:1,1,2,3,5,8,13,21.. sum of last two numbers
int fibonacci(int n){
    if (n<2)
    {
        return 1;
    }
    return fibonacci(n-2)+fibonacci(n-1);
}
//recursion will not always be used to solve problem , if possible then use, or else go with iterative approach
int main(){
    //factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1
    // n! = n*(n-1)!
    int a;
    cin>>a;
    cout<<"Factorial: "<<factorial(a)<<endl;
    cout<<"Fibonacci for position "<<"a: "<<fibonacci(a)<<endl;
    return 0;
}