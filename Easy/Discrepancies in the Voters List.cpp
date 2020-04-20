#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n1,n2,n3,i,c,x,s;
	c=0;
	
	cin>>n1>>n2>>n3;
	
	s=n1+n2+n3;
	
	int a[1000000]={0};

	
	
	for(i=0; i<s; i++)
	{
		cin>>x;
		
		a[x]++;
		
	}
	
	for(i=1; i<=1000000; i++)
	{
		if(a[i]>1)
		c++;
	}
	
	cout<<c<<"\n";
	
	
	for(i=0; i<=1000000; i++)
	{
	    if(a[i]>1)
	    cout<<i<<"\n";
	}
	
	
}
