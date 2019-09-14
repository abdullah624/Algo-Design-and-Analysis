#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1, s2;
	cin>>s1>>s2;
	int m, n;
	m = s1.size();
	n = s2.size();
	int l[m+1][n+1]={};

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s1[i-1] == s2[j-1]) l[i][j] = l[i-1][j-1] + 1;
			else l[i][j] = max(l[i-1][j],l[i][j-1]);

		}
	}
	cout <<"lcs length is" << l[m][n];
	int i = m;
	int j = n;
	char lcs[l[m][n]];
	int k = l[m][n]-1;
	lcs[k+1] = '\0';
	while(i > -1 && j > -1)
	{
		if(s1[i-1] == s2[j-1])
		{
			lcs[k] = s1[i-1];
			i--;
			j--;
			k--;
		}
		else{
        if(l[i-1][j] > l[i][j-1]) i--;
			else j--;
		}
	}
	cout <<"\nThe Longest Common Subsequence is " << lcs;
return 0;
}

