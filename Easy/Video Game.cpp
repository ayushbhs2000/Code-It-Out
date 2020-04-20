#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,h,i,c,x,f;
	
	
	cin>>n>>h;
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	c=0;
	f=0;
	while(true)
	{
		cin>>x;
		
		if(x==0)
		break;
		
		if(x==1 && c>0)
		c--;
		
		else if(x==2 && c<n-1)
		c++;
		
		else if(x==3 && a[c]>0 && f==0)
		{
			a[c]--;
			f=1;
		}
		
		
		else if(x==4 && a[c]<h && f==1)
		{
			a[c]++;
			f=0;
		}
	
	}
	
	for(i=0; i<n; i++)
	cout<<a[i]<<" ";
}
