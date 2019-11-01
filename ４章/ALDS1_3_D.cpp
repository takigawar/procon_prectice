//とけんだ
#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;
int main()
{
	string s;cin>>s;
	int dep=0,hei=0,wid=0;
	int ans=0;
	queue<int> answer;
	queue<int> Ans;
	stack<int> srsh;
	int bksr=0,sr=0;
	for(int i=0;i<s.size();++i)
	{
		if(s[i]=='\\')
		{
			srsh.push(i);
			if(bksr)sr++;
		}
		if(s[i]=='/')
		{
			if(srsh.size()==0)continue;
			int water=i-srsh.top();
			answer.push(water);
			ans+=water;
			srsh.pop();
			bksr++;
		}
		if((bksr==sr))
		{
			int a=0;
			for(int i=0;i,answer.size()!=0;++i)
			{
				a+=answer.front();
				answer.pop();
			}
			if(a)Ans.push(a);
			bksr=0;
		}
		
	}
	cout<<ans<<endl;
	cout<<Ans.size();
	for(int i=0;Ans.size()!=0;++i)
	{
		cout<<" ";
		cout<<Ans.front();
		Ans.pop();
	}
	cout<<endl;
	return 0;
}