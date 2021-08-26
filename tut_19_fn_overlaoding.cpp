#include<iostream>
using namespace std;

//below all are the combined example of function overloading
int add(int a, int b){
    cout<<"Using 2 argument fn"<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"Using 3 argument fn"<<endl;
    return a+b+c;
}

//fn ka naam h ek ek kaam h alag

string add(string a, string b){
    cout<<"Using 3 argument fn"<<endl;
    return a+b;
}

//overloaded fn to calculate volume
//for cylinder
int volume(double r, int h){
    cout<<"It is a cylinder and its volume is ";
    return (3.14*r*r*h);
}
//for cube
int volume(int a){
    cout<<"It is a cube and its volume is ";
    return (a*a*a);
}
//for cuboid
int volume(int l, int b, int h){
    cout<<"It is a cuboid and its volume is ";
    return (l*b*h);
    
}
int main(){
    cout<<"Adding 2 no. "<<add(3,6)<<endl;
    cout<<"Adding 3 no. "<<add(3,6,9)<<endl;
    cout<<"Adding 2 strings "<<add("Good"," Luck")<<endl;
    cout<<volume(5,8)<<endl;
    cout<<volume(5)<<endl;
    cout<<volume(5,4,6)<<endl;
    return 0;
}