#include <stdio.h>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    while(1)
    {       
    	long long int n;
    	cin>>n;
    	if(n==0)
    	    break;
    	else
    	{
            stack<long long int>s;
        	long long int ma=0,area=0,a[100009],i,t;
        	for(i=0;i<n;i++)
        		cin>>a[i];
        
        	for(i=0;i<n;)
        	{
        		if(s.empty())
        		{
        			s.push(i);
        			i++;
        		}
        		else
        		{
        			if(a[i]>=a[s.top()])
        			{
        				s.push(i);
        				i++;
        			}
        			else
        			{
        				t=s.top();
        				s.pop();
        				if(!s.empty())
        				{ 
        				area=a[t]*(i-s.top()-1);
                           
        				ma=max(ma,area);
        				}
                        else
                        {
                            area=a[t]*(i);
                            ma=max(ma,area);
                        }
                        // cout<<area<<" ";
        			}
        		}
        	}
        	//cout<<"a";
        	while(!s.empty())
        	{
        	    t=s.top();
        	    s.pop();
        	    if(!s.empty())
        	    {
        	    area=a[t]*(i-s.top()-1);  
        	    ma=max(ma,area);   
        	    }
                 else
                {
                     area=a[t]*(i);
                    ma=max(ma,area);
                }
                // cout<<area<<" ";
        	}
        	cout<<ma<<"\n";
        	
    	}
	
    }
	
	
    return 0;
} 
