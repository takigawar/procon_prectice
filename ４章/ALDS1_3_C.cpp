#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <string.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; ++i)
typedef long long ll;



int main()
{
	int n;cin>>n;
	list<int> s;
	rep(i,n)
	{
		char a[20];
		scanf("%s",a);
		

		if(!strncmp(a,"insert",12))
		{int k;
		scanf("%d",&k);
			//cout<<"aaa"<<endl;
				s.insert(s.begin(),k);
		}
		else if(!strncmp(a,"delete",12))
		{int k;
		scanf("%d",&k);
			for(auto itr = s.begin();itr != s.end();++itr)
			if(*itr==k){s.erase(itr);break;}
		}
		else if(!strncmp(a,"deleteFirst",12))
		{
			s.pop_front();
		}
		else if(!strncmp(a,"deleteLast",12))
		{
			s.pop_back();
		}
		//for(auto itr = s.begin(); itr != s.end();++itr)
	//printf("%d ",*itr);
	//printf("\n");
	}
	for(auto itr = s.begin(); itr != s.end();++itr)
	{
	if(itr!=s.begin())printf(" ");
	printf("%d",*itr);
	}
	printf("\n");
	return 0;
}