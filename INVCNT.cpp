#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll c=0;//aashish singh
void merge(ll a[],ll low,ll mid,ll high)
{
	ll n1=mid+1;
	ll n2=high+1;
	ll L[high-low+1];
	ll i,j,k;
	i=low,j=mid+1,k=0;;
	while(i<n1&&j<n2)
	{
		if(a[i]<=a[j])
		{
			L[k]=a[i];
			i++;
		}
		else
		{
			L[k]=a[j];
			c+=mid-i+1;
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		L[k]=a[i];
		i++,k++;
	}
	while(j<n2)
	{
		L[k]=a[j];
		j++,k++;
	}
	for(i=0;i<k;i++)
	{
		a[low+i]=L[i];
	}
}
void m(ll a[],ll low,ll high)
{
	if(low<high)
	{
		ll mid=(low+high)/2;
		m(a,low,mid);
		m(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
int main() {
    ll i,j,k,l,n,t,t1;
    cin>>t;
	while(t--)
	{
		c=0;
		cin>>n;
	ll a[n+1];
	
	for(i=0;i<n;i++)
    	cin>>a[i];
	m(a,0,n-1);
        cout<<c<<endl;//allenite
	}
} 