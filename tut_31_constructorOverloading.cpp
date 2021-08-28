#include <iostream>
// #include<math.h>
using namespace std;

class Point{
    int x, y;
    public:
    Point(int a, int b){
        x=a;
        y=b;
    }
    Point(int a){
        x=a;
        y=0;
    }
    Point(){
        x=0;
        y=0;
    }
    void printNum(){
        cout<<"The coord is: ("<<x<<","<<y<<")"<<endl;
    }
};


int main(){
    Point a(2,3);
    Point b(4);
    Point c;
    a.printNum();
    b.printNum();
    c.printNum();

    return 0;
}