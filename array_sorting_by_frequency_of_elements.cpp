#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int T;
	cin>>T;
	while(T--)
	{
		long long int N;
		cin>>N;
		long long int A[N],B[N];
		for(int i=0;i<N;i++)
		{
			cin>>A[i];      //input
		}
		set<int> s;
		set<int> :: iterator itr; 
		for(int i=0;i<N;i++)
		{
			s.insert(A[i]);   //identifying unique elements and store it into set
		}
		int count[s.size()]; // To store frequency of each element
    int k=0,c=0,m=0;
		for(itr=s.begin();itr!=s.end();itr++)
		{
			c=0;
			for(int j=0;j<N;j++)
			{
				if(*itr==A[j])
				{
					c++;
				}
			}
			count[k]=c;
			k++;
		}
		for(int j=0;j<s.size();j++)
		{
		    int max=0;
		    int index=0;
		    for(int i=0;i<s.size();i++)
		    {
			    if(max<count[i])
			    {
			        max=count[i];
			        index=i;
			     }
			   
		    }
		    count[index]=0;
		            itr =s.begin();   
                std::advance(itr, index);   //find the element in the set that is present at "index"
                int x=*itr;
                int n=max;
            while(n--)
            {
                B[m]=x;
                m++;
            }
        }
        for(int i=0;i<m;i++)
        {
            cout<<B[i]<<" ";        //output
        }
        cout<<endl;
	}
	return 0;
}
