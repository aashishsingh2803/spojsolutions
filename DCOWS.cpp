
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	long long int n,m,i,j,a[5009],b[5009],dp[5009][5009];
	cin>>n>>m;
	
	for(i=1;i<=n;i++)
	{
	    cin>>a[i];
	}
	for(i=1;i<=m;i++)
	{
	    cin>>b[i];
	}
	
	for(i=0;i<=n;i++)
	{
	    dp[i][0]=0;
	}
	for(i=0;i<=m;i++)
	{
	    dp[0][i]=0;
	}
	sort(a+1,a+n+1);
	sort(b+1,b+m+1);
	
	for(i=1;i<=n;i++)
	{
	    for(j=i;j<=m;j++)
	    {
	        if(i==j)
	        {
	            dp[i][j]=dp[i-1][j-1]+abs(a[i]-b[j]);
	        }
	        else
	        {
	            dp[i][j]=min(dp[i-1][j-1]+abs(a[i]-b[j]),dp[i][j-1]);
	        }
	       
	    }
	}
 
	
	cout<<dp[n][m];
	
	return 0;
}
