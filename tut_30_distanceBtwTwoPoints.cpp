#include <iostream>
#include<math.h>
using namespace std;

class Point{
    int x, y;
    friend float distance(Point,Point);
    public:
    Point(int, int);
    void printNum(){
        cout<<"The coord is: ("<<x<<","<<y<<")"<<endl;
    }
};

float distance(Point o1, Point o2){
    float res;
    res=sqrt(pow((o2.y-o1.y),2)+pow((o2.x-o1.x),2));
    return res;
}

Point::Point(int a, int b){
    x=a;
    y=b;
}
int main(){
    Point a(2,3);
    Point b(4,5);
    a.printNum();
    b.printNum();
    cout<<distance(a,b)<<endl;

    return 0;
}