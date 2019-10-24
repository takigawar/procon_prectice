#include <stdio.h>
#include <stack>
#include <cstdlib>
using namespace std;

int main()
{
	stack<int> ans;
	char s[100];
	while (scanf("%s",s)!=EOF)
	{
		if(s[0]=='+')
		{
			int a=ans.top();
			ans.pop();
			int b=ans.top();
			ans.pop();
			ans.push(a+b);
		}
		else if (s[0]=='-')
		{
			int a=ans.top();
			ans.pop();
			int b=ans.top();
			ans.pop();
			ans.push(b-a);
		}
		else if (s[0] == '*')
		{
			int a=ans.top();
			ans.pop();
			int b=ans.top();
			ans.pop();
			ans.push(a*b);
		}
		else
		{
			ans.push(atoi(s));
		}
	}

	printf("%d\n",ans.top());
	return 0;
}