#include <iostream>
#include <string>
#include <stdio.h>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; ++i)
typedef long long ll;

int binarySearch(vector<int> A, int key, int n)
{
	int left = 0;
	int light = n;
	while ( left < light )
	{
		int mid = (left + light)/2;
		if (A[mid]==key)return mid;
		else if(key < A[mid])light = mid;
		else left = mid + 1;
	}
	return -1;
}

int main()
{
	int n; cin >> n;
	vector<int> S(n);
	rep(i,n)cin>>S[i];
	int q; cin >> q;
	vector<int> T(q);
	rep(i,q)cin >> T[i];
	int count=0;
		rep(j,q)
		{
			int foo = binarySearch(S,T[j],n);
			if(foo!=-1)count++;
		}
	cout<<count<<endl;
	return 0;
}