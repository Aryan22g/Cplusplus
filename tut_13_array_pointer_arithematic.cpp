#include<iostream>
using namespace std;

int main(){
    int marks[4]={23,45,67,86};
    int math_marks[4];
    math_marks[0]=23423;
    math_marks[1]=3454;
    math_marks[2]=3443554;
    math_marks[3]=36534;
    cout<<"These are MAth Marks"<<endl;
    cout<<math_marks[0]<<endl;
    cout<<math_marks[1]<<endl;
    cout<<math_marks[2]<<endl;
    cout<<math_marks[3]<<endl;
    cout<<"These are  Marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    //to change value of array
    marks[2]=43;
    cout<<marks[2]<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    

    //Pointers and arrays
    //pointer arithematic:
    // addres(new)=address(current)+i*sizeof(datatype)
    // p+i=p+i*sizeof(datatype);
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p);
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    return 0;
}