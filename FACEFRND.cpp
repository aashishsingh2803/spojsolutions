#include <stdio.h>
#include <bits/stdc++.h>
 
using namespace std;
 
main()
{
	long long int n,i,a[100009],n1,j,b,cnt;
	set<long long int >s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>n1;
 
		for(j=0;j<n1;j++)
		{
			cin>>b;
			s.insert(b);
		}
	}
	cnt=s.size();
	for(i=0;i<n;i++)
	{
		if(s.find(a[i])!=s.end())
		{
			cnt--;
		}
	}
 
	cout<<cnt;
} 