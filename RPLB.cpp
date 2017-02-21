#include <iostream>
using namespace std;
 
typedef long long int ll;
 
int main() {
	
	int t,t1=1;
	cin>>t;
	while(t--)
	{
	    ll dp[1009][1009],n,k,i,j,a[1009];
	    
	    cin>>n>>k;
	    for(i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(i=0;i<=k;i++)
	    {
	        dp[0][i]=0;
	        dp[i][0]=0;
	    }
	    
	    for(i=1;i<=k;i++)
	    {
	        if(i>=a[1])
	        {
	            dp[1][i]=a[1];
	        }
	        else
	        dp[1][i]=0;
	    }
	    
	    for(i=2;i<=n;i++)
	    {
	        for(j=1;j<=k;j++)
	        {
	            if(a[i]>j)
	            {
	                dp[i][j]=dp[i-1][j];
	                
	            }
	            else 
	            {
	                dp[i][j]=max(dp[i-2][j-a[i]]+a[i],dp[i-1][j]);
	            }
	        }
	    }
	    cout<<"Scenario #"<<t1<<": "<<dp[n][k]<<"\n";
	    t1++;
	}
	return 0;
}
 