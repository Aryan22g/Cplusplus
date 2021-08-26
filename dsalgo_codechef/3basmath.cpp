#include<bits/stdc++.h>
using namespace std;

// int calc_pow(int a, int n){
//     if (n==0)
//     {
//         return 1;
//     }
    
//     if (n%2==0)
//     {
//         int half_ans=calc_pow(a,n/2);
//         return half_ans*half_ans;
//     }
//     else
//     {
//         int half_ans=calc_pow(a,n/2);
//         return half_ans*half_ans*a;

//     }   
// }

const int mod= 1000000007;
int modular_expo(int a, int n){
    if (n==0)
    {
        return 1;
    }
    
    if (n%2==0)
    {
        long long half_ans=modular_expo(a,n/2);
        return (half_ans*half_ans)%mod;
    }
    else
    {
        int half_ans=modular_expo(a,n/2);
        half_ans=(half_ans*half_ans)%mod;
        half_ans=(half_ans*a)%mod;
        return half_ans;

    }  
}

int main(){
    // cout<<calc_pow(10,5);
    cout<<modular_expo(10,5);
    // cout<<(6%4)<<'\n';
    // cout<<(-6%4)<<'\n';
    return 0;
}