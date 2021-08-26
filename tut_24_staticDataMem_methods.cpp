#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;   //static data member of class employee
    public:
    void setData(void){
        cout<<"Enter id: "<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"id: "<<id<<" employee no "<<count<<endl;
    }
    
};
int Employee::count;    //default value is 0 but can be changed as per reuirement in this line only
int main(){
    Employee harry, rohan, lovish;
    // harry.id=1;
    // harry.count=1;   cannot do beacause id and count are private members
    harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();
    
    lovish.setData();
    lovish.getData();
}