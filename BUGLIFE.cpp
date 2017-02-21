#include <stdio.h>
#include <bits/stdc++.h>
 
using namespace std;
 
main()
{
 
	int t,t1=1;
	cin>>t;
	while(t--)
	{
		int n,k,a,b,i,j,x,d[2009];
		cin>>n>>k;
		vector<int>v[2009];
	
		int visit[2009]={};
		for(i=0;i<k;i++)
		{
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
 
		for(i=1;i<=n;i++)
		{
			if(!visit[i])
			{
				visit[i]=1;
				queue<int>q;
				q.push(i);
 
				while(!q.empty())
				{
					int x=q.front();
					q.pop();
 
					for(int i=0;i<v[x].size();i++)
					{
						if(!visit[v[x][i]])
						{
							visit[v[x][i]]=1;
							d[v[x][i]]=(d[x]+1)%2;
							q.push(v[x][i]);
						}
					}	
				}
			}
		}
		int p=0;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<v[i].size();j++)
			{
				if(d[v[i][j]]==d[i])
				{	p=1;//cout<<v[i][j]<<" "<<i<<" ";break;
				    break;
				}
			}
			if(p==1)
			{
			    break;
			}
		}
 
		if(p==0)
		{
			cout<<"Scenario #"<<t1<<":\n";
			cout<<"No suspicious bugs found!\n";
		}
		else
		{
			cout<<"Scenario #"<<t1<<":\n";
			cout<<"Suspicious bugs found!\n";
		}
 
		t1++;
	}			
 
} 