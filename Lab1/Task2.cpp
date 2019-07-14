#include <bits/stdc++.h>
using namespace std;


int Div(string s, int radix, int m)
{
        int h = 0, i, j;
 
       for(i=s.length()-1; i>=0; --i)
        {
                int p = s[i];
 
                for(j=s.length()-i-1; j>0; --j)
                {
                        p *= radix;
                        p %= m;
                }
 
                h += p;
                h %= m;
        }
 
        return h;
}
int main(){
	int r, m, now, nw, i=0;
	string s;
	vector<int>v;
	cin>>now>>r>>m;
	nw=now;
	while(now--){
		cin>>s;
		v.push_back(Div(s, r, m));
	}
	
	while(nw--){
		cout<<v[i]<<" ";
		i++;
	}
	cout<<endl;
	

}