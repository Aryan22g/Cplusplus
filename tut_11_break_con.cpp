//build your own sinnepts using "user snippets"
#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 40; i++)
    // {
    //     cout<<i<<endl;
    //     if (i==34)
    //     {
    //         break;
    //     }
        
    // }

    for (int i = 0; i < 40; i++)
    {
        if (i==2)
        {
            continue;   //it stops this iteration and continues for next iteraation
        }
        cout<<i<<endl;
        
    }
    
    
    return 0;
}