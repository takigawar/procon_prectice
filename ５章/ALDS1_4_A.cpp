#include <iostream>
#include <string>
#include <stdio.h>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; ++i)
typedef long long ll;

int main()
{
	int n;cin>>n;
	vector<int> S(n);
	rep(i,n)cin>>S[i];
	int q;cin>>q;
	vector<int> T(q);
	rep(i,q)cin>>T[i];
	int count = 0;
	rep(i,q)
	{
		rep(j,n)
		{
			if(T[i]==S[j]){count++;break;}
		}
	}
	cout<<count<<endl;
	return 0;
}