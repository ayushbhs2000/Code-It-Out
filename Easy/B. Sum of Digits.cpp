#include <bits/stdc++.h>

using namespace std;


int main()
{
	

char n[1000000];

int i,c,s,l,d,x;
s=10;
c=0;

cin>>n;
l=strlen(n);

if(l==1)
c=0;

else
{
while(s>9)
{
	s=0;
	
	for(i=0; i<strlen(n); i++)
	{
		s+=n[i]-48;
	}
	c++;
	x=s;
	if(s>9)
	{
		i=0;
		while(s>0)
		{
			d=s%10;
			n[i]=d+48;
			i++;
			s/=10;
		}
		
		n[i]='\0';
		s=x;
	}
	
	else
	break;
	
	
}
}

cout<<c;

}
