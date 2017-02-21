#include <stdio.h>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n,sum;
		cin>>n;
 
		if(n%2==0)
		{
			sum=n*(n+2)*(2*n+1)/8;
			cout<<sum<<"\n";
		}
		else
		{
			sum=(n*(n+2)*(2*n+1)-1)/8;
			cout<<sum<<"\n";
		}
 
	}
 
    return 0;
} 
