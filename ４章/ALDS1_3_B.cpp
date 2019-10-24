#include <iostream>
#include <queue>
#include <string>
#define rep(i,n) for(int (i)=0;(i)<(n);++(i))
using namespace std;


int main()
{
	int n; cin >> n;
	int t; cin >> t;
	queue<pair<int,string>> p;
	rep(i,n)
	{
		string s;cin>>s;
		int x;cin>>x;
		p.push(make_pair(x,s));
	}
	int now=0;
	while (p.size()!=0)
	{
		p.front().first-=t;
		if(p.front().first<=0)
		{
			now += t + p.front().first;
			cout<<p.front().second<<" "<<now<<endl;
			p.pop();
		}
		else
		{
			now+=t;
			pair<int, string> x=p.front();
			p.pop();
			p.push(x);
		}
	}
	return 0;
}