#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		
		string s,t,u;
		cin>>s;
		cin>>t;
		cin>>u;
        int diff=(t[0]-s[0]);
        
        
        for(int i=0;i<3;i++)
        {
  
        if ((u[i]+ diff)>122)
        {
        	int w =u[i]+ diff-26;
        	cout<<char(w);
        }
        else if ((u[i]+ diff)<97)
        {
        	int w =u[i]+ diff+26;
        	cout<<char(w);
        }
        else{
        	int w =u[i]+ diff;
        	cout<<char(w);
        }
        }
        cout<<endl;
	}
	return 0;
}