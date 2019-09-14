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

            for(int j=0; j<i; j++){
                if(ar[i]>ar[j] && LIS[j]+1>LIS[i] && (ar[i]+ar[j])%2==1) {LIS[i]=LIS[j]+1; if(LIS[i]>lis) lis=LIS[i];}
            }

        }

        cout<<"LIS Length is :"<<lis<<"\n";
        int a;
        for(int i=n-1; i>=0; i--){
            if(LIS[i]==lis && v.empty()) {a=ar[i]; v.push_back(ar[i]); lis--;}
            else if(LIS[i]==lis && ar[i]<a && (a+ar[i])%2!=0) {a=ar[i]; v.push_back(ar[i]); lis--;}
        }
        reverse(v.begin(),v.end());
        cout<<"LIS is :";
        for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
        cout<<endl;


        lis=1;
    }

}
