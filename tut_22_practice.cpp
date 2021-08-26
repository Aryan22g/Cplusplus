#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onescomp(void);
    void display(void);
};

void binary::read(void){
    cout<<"Enter a binary number: ";
    cin>>s;
}

void binary::chk_bin(void){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid Binary Number"<<endl;
            exit(0);
        }
    }
}

void binary::onescomp(void){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0')    s.at(i)='1';
        else    s.at(i)='0';
    }
}

void binary::display(void){
    cout<<"Binary number is: "<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.onescomp();
    b.display();

}