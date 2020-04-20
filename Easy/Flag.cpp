#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,i,j,p;
	p=0;
	
	cin>>n>>m;
	
	char a[n][m];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m-1; j++)
		{
			if(a[i][j]!=a[i][j+1])
			{
				p=1;
				break;
			}
		}
	}
	
	
	
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<m; j++)
		{
			if(a[i][j]==a[i+1][j])
			{
				p=1;
				break;
			}
		}
	}
	
	
	if(p==1)
	cout<<"NO";
	
	else
	cout<<"YES";
}
