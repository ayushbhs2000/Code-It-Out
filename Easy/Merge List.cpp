
#include<bits/stdc++.h> 
using namespace std; 
  
/* Iterative Function to calculate (x^y)%p 
  in O(log y) */
long long power(long long x, long long y, long long p) 
{ 
    long long res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or 
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
} 
  
// Returns n^(-1) mod p 
long long modInverse(long long n, long long p) 
{ 
    return power(n, p-2, p); 
} 
  
// Returns nCr % p using Fermat's little 
// theorem. 
long long nCrModPFermat(long long n, long long r, long long p) 
{ 
   // Base case 
   if (r==0) 
      return 1; 
  
    // Fill factorial array so that we 
    // can find all factorial of r, n 
    // and n-r 
    long long fac[n+1]; 
    fac[0] = 1; 
    for (long long i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
  
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
} 
  
// Driver program 
int main() 
{ 
    long long t,n,m,p,c;
    
    cin>>t;

    while(t--)
    {
        p=1000000000+7;


         cin>>n>>m;
         c=nCrModPFermat(n+m, m, p); 
    cout << c;
    cout<<"\n";




    }

    return 0; 
} 
