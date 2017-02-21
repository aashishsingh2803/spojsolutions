#include<bits/stdc++.h>
using namespace std;
int visit[10004]={};
vector<int >v1[100004];
 
void dfs(int x)
{
    int i;
    visit[x]=1;
    for(i=0;i<v1[x].size();i++)
    {
        if(visit[v1[x][i]]==0)
            dfs(v1[x][i]);
    }
}
 
main()
{
    int v,t,a,b,i;
    cin>>v>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        v1[b].push_back(a);
        v1[a].push_back(b);
    }
 
    dfs(1);
 
    for(i=1;i<=v;i++)
    {
         if(visit[i]==0)
         {
             cout<<"NO";
             return 0;
         }
    }
 
    if(t==v-1)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
 
 
 
 
}
 