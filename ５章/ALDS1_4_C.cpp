#include <iostream>
#include <string>
#include <unordered_map>
#include <stdio.h>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; ++i)
typedef long long ll;

int main()
{
	int n;
	cin >> n;
	unordered_map<string , bool> hash;
	rep(i,n)
	{
		string s;
		cin>>s;string e;cin>>e;
		if(s=="insert")
		{
			
			hash[e]=true;
		}
		else
		{
			if(hash[e]==true)
			{
				cout<<"yes"<<endl;
			}
			else
			{
				cout<<"no"<<endl;
			}
		}
	}
	return 0;
}