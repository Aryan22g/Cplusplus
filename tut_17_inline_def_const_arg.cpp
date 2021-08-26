#include<iostream>
using namespace std;

//inline replaces function call to in that line only
inline int product(int x, int y){
    return x*y;
}
//Don't make every  function inline:
// ----> only make small functions inline not big functions
// don't use 
// for recursuion
// static variables eg.
// inline int product(int x, int y){
//     static int c=0;     //THis is sexecutes only once
//     //next time this function is run, the value of c will be retained
//     //so don't use inline with static variables
//     c=c+1;
//     return x*y+c;
// }

float moneyReceived(int currentMoney, float factor=1.04 /*default value written after first argument*/ ){
    return currentMoney*factor;
}

//const: to not make changes (to a function)
// int strlen(const char *p){

// }
int main(){
    int a, b;
    cout<<"Enter the vallue of a an b ";
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;    /* if static used c=0*/
    // cout<<"The product of a and b is "<<product(a,b)<<endl;    /* if static used c=1*/
    // cout<<"The product of a and b is "<<product(a,b)<<endl;    /* if static used c=2*/
    // cout<<"The product of a and b is "<<product(a,b)<<endl;    /* if static used c=3*/
    // cout<<"The product of a and b is "<<product(a,b)<<endl;    /* if static used c=4*/
    // cout<<"The product of a and b is "<<product(a,b)<<endl;    /* if static used c=5*/
    // cout<<"The product of a and b is "<<product(a,b)<<endl;    /* if static used c=6*/
    int money=100000;
    cout<<"If you have  "<<money<<"Rs in your bank account, you will recieve "<< moneyReceived(money)<<"Rs after one year"<<endl;
    cout<<"For VIP , If you have  "<<money<<"Rs in your bank account, You will recieve "<< moneyReceived(money, 1.1)<<"Rs after one year"<<endl;
    return 0;
}