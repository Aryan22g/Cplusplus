#include <iostream>

using namespace std;

int main(){
    int n,A[1000];          //1
    cin>>n;                 //1
    for (int i = 0; i <= n; i++)        
    {
        cin>>A[i];          //n
    }
    int sum=0;              //1
    for (int i = 0; i <= n; i++)
    {
        sum+=A[i];          //n
    }
    cout<<sum;              //1
                    //total no. of steps 2n+4
}


//Input size: is important and measured in number of bits but we will not go deep into it


// we know that 2n+4<5n+6
/*but  for 2n+400 ? 5n+6
depends on value of n
2n+400<5n+6
3n>394
n>394/3
n>132
*/

/*Asymptotic Analysis::
Don't worry about smaal inputs but worry about large inputs
f(n) is better than g(n) that exists n0 such that for all n>n0, f(n) <= g(n)
*/