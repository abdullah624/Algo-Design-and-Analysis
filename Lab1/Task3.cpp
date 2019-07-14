#include<bits/stdc++.h>
using namespace std;

int Multi(int K){
	double a = 0.64;
    int m = 100010, r;
    r = floor(m*(K*a-floor(K*a)));
    return r;
}

int main()
{
    int k;
    cin>>k;

    cout<<Multi(k)<<endl;
    
}