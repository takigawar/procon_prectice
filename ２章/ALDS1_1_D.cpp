//嘘解法
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
	int n;cin>>n;
	vector<int> R(n);for(int i=0;i<n;i++)cin>>R[i];
	int min=INT_MAX;
	int max=INT_MIN;
	int num;
	for(int i=0;i<n;i++)
	{
		if(min>R[i])
		{
			min=R[i];
			num=i;
			for(int j=i+1;j<n;j++)
			{
				int dif=R[j]-R[i];
				if(max<dif)max=dif;
			}
		}
	}
	cout<<max<<endl;
	return 0;
}