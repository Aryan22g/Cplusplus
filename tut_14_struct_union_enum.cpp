#include<iostream>
using namespace std;

// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };
// or to shorten code
// typedef struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// } ep;

//union provides better memory-management
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};


int main(){
    // struct employee harry;
    // // similarly
    // ep shubham;
    // ep rohanDas;

    // harry.eId=1;
    // harry.favChar='c';
    // shubham.salary=1200000000;
    // shubham.eId=2;
    // shubham.favChar='c';
    // harry.salary=1200000000;
    // rohanDas.eId=3;
    // rohanDas.favChar='c';
    // rohanDas.salary=1200000000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;

    //use only one for output  because it is ashared memory
    // union money m1;
    // m1.rice=34;
    // // m1.car='c';
    // cout<<m1.rice<<endl;
    // // cout<<m1.car;

    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = dinner;
    cout<<m1<<endl;
    cout<<(m1==1);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    
    return 0;
}