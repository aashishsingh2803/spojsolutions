#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,p,q;
		scanf("%lld%lld",&a,&b);
		
		p=max(a,b);
		q=min(a,b);
		
		while(q>0)
		{
			long long int x=p;
			p=q;
			q=x%p;
		}
	//	cout<<p<<" ";
		while(p%2==0)
		{
			p=p/2;
		}
	//	cout<<p<<" "<<"\n";
		if(p==1)
		{
			printf("Y\n");
		}
		else
		printf("N\n");
		
	}
	
	
} 