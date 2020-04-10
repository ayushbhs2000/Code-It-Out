#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n,k,x,c;
	
	cin>>n>>k;
	
	if(n%2==0)
		x=n/2;
	
	else
		x=(n+1)/2;
	
	
	
		if(k<=x)
		c=2*k-1;
		
		else
		c=2*(k-x);
		
		cout<<c;
}
