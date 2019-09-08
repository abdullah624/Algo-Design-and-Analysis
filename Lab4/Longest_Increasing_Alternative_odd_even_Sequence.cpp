#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, lis=1;
    vector<int> v;
    cout<<"Enter array length"<<endl;
    cin>>n;
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++) {cin>>arr1[i]; arr2[i]=1;}
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr1[i]>arr1[j] && arr2[j]+1>arr2[i] &&((arr1[i]%2==0 && arr1[i-1]%2==1) || (arr1[i]%2==1 && arr1[i-1]%2==0)))
                {arr2[i]+=1; if(arr2[i]>lis) lis=arr2[i];}
        }
        for(int k=0; k<n; k++) cout<<arr2[k]<<" ";
        cout<<endl;
    }
        for(int i=n-1; i>=0; i--)
            if(arr2[i]==lis) {v.push_back(arr1[i]); lis--;}
        reverse(v.begin(),v.end());
        for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
        cout<<endl;

}
