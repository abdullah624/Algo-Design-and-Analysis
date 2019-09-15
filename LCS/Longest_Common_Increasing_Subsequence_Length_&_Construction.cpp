#include<bits/stdc++.h>
using namespace std;


void lcs(int ar1[], int n, int ar2[], int m)
{
	int l[m+1][n+1]={};

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(ar1[i-1] == ar2[j-1]) l[i][j] = l[i-1][j-1] + 1;
			else l[i][j] = max(l[i-1][j],l[i][j-1]);

		}
	}
	cout <<"LCIS length is: " << l[m][n];
	int i = m;
	int j = n;
	int LCS[l[m][n]];
	int k = l[m][n]-1;
	//lcs[k+1] = '\0';
	while(i > -1 && j > -1)
	{
		if(ar1[i-1] == ar2[j-1])
		{
			LCS[k] = ar1[i-1];
			i--;
			j--;
			k--;
		}
		else{
        if(l[i-1][j] > l[i][j-1]) i--;
			else j--;
		}
	}
	cout <<"\nThe Longest Common Increasing Subsequence is: ";
	for(int i=0; i<l[m][n]; i++) cout<<LCS[i]<<" ";
	cout<<endl;
}




void lis(int ar[], int n, int s[]){
        int LIS[n];
        for(int i=0; i<n; i++) LIS[i]=1;
        int L=1;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(ar[i]>ar[j] && LIS[j]+1>LIS[i]) {LIS[i]=LIS[j]+1; if(LIS[i]>L) L=LIS[i];}
            }
        }
        int l=L,b=0;
        for(int i=n-1; i>=0; i--)
            if(LIS[i]==L) {s[b]=ar[i]; b++; L--;}
        reverse(s,s+l);

}


int main(){
    int n, m, a, b;
    cin>>n>>m;
    int ar1[n], ar2[m], ra1[n], ra2[m];
    for(int i=0; i<n; i++) cin>>ar1[i];
    for(int i=0; i<m; i++) cin>>ar2[i];
    lis(ar1,n,ra1);
    lis(ar2,m,ra2);
    a=sizeof(ra1)/sizeof(ra1[0]);
    b=sizeof(ra2)/sizeof(ra2[0]);
    lcs(ra1, a, ra2, b);

}
