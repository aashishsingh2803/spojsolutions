#include<bits/stdc++.h>
using namespace std;
main()
{
    list < int >q;
    vector < int >v[10008];
     int d[10009]={},visit[10009]={},visit1[10009]={},d1[10009]={},x,i;
    long long int a,b,n;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    visit[1]=1;
    q.push_back(1);
    while(!q.empty())
    {
        x=q.front();
        visit[x]=1;
        q.pop_front();
        for(i=0;i<v[x].size();i++)
        {
            if(!visit[v[x][i]])
            {
                visit[v[x][i]]=1;
                q.push_back(v[x][i]);
                d[v[x][i]]=d[x]+1;
            }
        }
    }
  int m=0,p;
    for(i=1;i<=n;i++)
    {
        if(d[i]>m)
        {
            m=d[i];
            p=i;
        }
 
    }
 
    q.push_back(p);
    while(!q.empty())
    {
        x=q.front();
        q.pop_front();
        visit1[x]=1;
 
        for(i=0;i<v[x].size();i++)
        {
            if(!visit1[v[x][i]])
            {
                visit1[v[x][i]]=1;
                  q.push_back(v[x][i]);
                d1[v[x][i]]=d1[x]+1;
 
            }
        }
    }
    m=0;
    for(i=1;i<=n;i++)
    {
        m=max(m,d1[i]);
 
    }
    cout<<m;
 
 
 
}
 