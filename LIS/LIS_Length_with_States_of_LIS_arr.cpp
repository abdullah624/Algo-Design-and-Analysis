#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, lis=1;
    cin>>t;
    for(int k=1; k<=t; k++){
        cin>>n;
        int ar[n], LIS[n];
        vector <int> v;
        for(int i=0; i<n; i++){
            cin>>ar[i];
            LIS[i]=1;
        }

        for(int i=1; i<n; i++){
            cout<<"Step "<<i<<" :";
            for(int j=0; j<n; j++) cout<<LIS[j]<<" ";
            cout<<endl;
            for(int j=0; j<i; j++){
                if(ar[i]>ar[j] && LIS[j]+1>LIS[i]) {LIS[i]=LIS[j]+1; if(LIS[i]>lis) lis=LIS[i];}
            }
        }
        cout<<"Step "<<n<<" :";
            for(int j=0; j<n; j++) cout<<LIS[j]<<" ";
            cout<<endl;
        cout<<"LIS Length is :"<<lis<<"\n";
        lis=1;
    }

}
