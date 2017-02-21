#include <bits/stdc++.h>
using namespace std;
multiset<int>m1;
multiset<int>::iterator itr,itr1,itr2;
int parent[100009],size[100009];
int root(int x)
{
    if(parent[x]!=x)
        parent[x]=root(parent[x]);
    return parent[x];    
}
 
void unin(int a,int b)
{
    int s=size[a];
    size[a]+=size[b];
    itr=m1.find(size[b]);
    //if(itr!=m1.end()) 
        m1.erase(itr);
    itr=m1.find(s);
    //if(itr!=m1.end())   
        m1.erase(itr);
    m1.insert(size[a]);
    //size[b]=0;
    parent[b]=a;
}
 
int main() {
	// your code goes here
	int n,q,i,a,b;
	cin>>n>>q;
	for(i=0;i<n;i++)
	    m1.insert(1);
	for(i=1;i<=n;i++)
	    parent[i]=i,size[i]=1;
	for(i=0;i<q;i++)
	{
	    cin>>a>>b;
	    if(root(a)!=root(b))
	    {
	        unin(root(a),root(b));
	    }
	    itr=m1.begin();
	    itr2=m1.end();
	    itr2--;
	    /*cout<<m1.size()<<" ";
	    for(itr=m1.begin();itr!=m1.end();itr++)
	    {
	        cout<<*itr;
	    }
	    cout<<"\n";*/
	    cout<<*itr2-*itr<<"\n";
	    
	}
	return 0;
}