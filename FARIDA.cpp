#include <stdio.h>
#include <bits/stdc++.h>
 
using namespace std;
 
main()
{
	int t1=1,t;
	cin>>t;
	while(t--)
	{
		long long int dp[10009],a[10009],n,i;
		cin>>n;
		dp[0]=0;
		dp[1]=0;
		dp[2]=0;
		for(i=3;i<n+3;i++)
		{
			cin>>a[i];
		}
 
		for(i=3;i<n+3;i++)
		{
			dp[i]=max(dp[i-2],dp[i-3])+a[i];
		}
 
		cout<<"Case "<<t1<<": "<<max(dp[n+2],dp[n+1])<<"\n";
 
		t1++;
	}
 
} 