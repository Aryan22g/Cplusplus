/*control structure:
sequence 
selection 
loop

if-else, if else ladder
switch case
while*/
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"What  is your age ?"<<endl;
    // ifelse
    // cin>>age;
    // if (age<18)
    // {
    //     cout<<"You are a kid.";
    // }
    // else if (age==18)
    // {
    //     cout<<"You are 18. Don't come.";
    // }
    // else
    // {
    //     cout<<"You are adult. Behave responsibly.";
    // }
    switch (age)
    {
    case 18:
       cout<<"You are 18";
        break;
    
    default: 
    cout<<"You are not 18";
        break;
    }
    
    return 0;
}
