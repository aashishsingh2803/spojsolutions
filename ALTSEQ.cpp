#include <stdio.h>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	long long int dp[5009],n,i,j,a[5009];
	cin>>n;
	for(i=0;i<n;i++)
	{
		dp[i]=1;
	}
 
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
 
	i=0;j=1;
	
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(abs(a[i])>abs(a[j])&&((a[i]>0&&a[j]<0)||(a[i]<0&&a[j]>0)))
				{
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
		}
		long long ma=0;
		for(i=0;i<n;i++)
		{
			ma=max(ma,dp[i]);
		//	cout<<dp[i];
		}
		cout<<ma;
    return 0;
} 