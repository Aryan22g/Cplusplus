#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}

//this will not swap a and b
void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;

}
//call by reference using pointer
void swapPointer(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//call by reference using c++ reference varialbles
int & swapReferenceVar(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;

    return a;
}
int main(){
    int a=4,b=5;
    
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
    // swap(a,b);
    // swapPointer(&a,&b);
    swapReferenceVar(a,b)=768;
    cout<<"The value of a is "<<a<<" The value of b is "<<b;

    return 0;
}