#include<iostream>
using namespace std;

class Simple{
    int data1, data2, data3;
    public:
    Simple(int x,int y=6, int z=0){
        data1=x;
        data2=y;
        data3=z;
    }
    void printNum();
};

void Simple::printNum(){
    cout<<data1<<" "<<data2<<" "<<data3<<endl;
}

int main(){
    Simple a(3,4,5);
    Simple b(3);
    Simple c(4,1);
    a.printNum();
    b.printNum();
    c.printNum();
    
}