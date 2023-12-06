

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long N,i;
	    double m;
	    cin>>N;
	    
	    std::vector<double> v ;
	    
	    for(i=0;i<N;i++)
	    {
	       cin>>m;
	       v.push_back(m);
	    }
	    double x,y,z;
	    sort(v.rbegin(),v.rend());
	    
	    for(i=1;i<N;i++)
	    {
	        if(i==1)
	        {
	           x=v[i-1];
	           y=v[i];
	           z=(x+y)/2.0;
	        }
	        else
	        {
	            z=(z+v[i])/2.0;
	        }
	    }
	   // cout<<z<<endl;
	    cout<<fixed<<setprecision(10)<<z<<endl;
	    
	}
	return 0;
}
