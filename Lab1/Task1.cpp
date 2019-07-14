#include <bits/stdc++.h>
using namespace std;


int Hash(string s, int radix, int m)
{
        int hashValue = 0;
        int n = s.length();
 
        for(int i=0; i<n; ++i) {
                hashValue = (hashValue * radix + s[i]-'a') % m;
        }
 
        return hashValue;
}

int main(){
	int r, m, i=10;
	string s;
	set<int> st;
	cin>>r>>m;
	while(i--){
		cin>>s;
		st.insert(Hash(s, r, m));
	}

	
	cout<<st.size()<<endl;

	

}