#include <iostream>
using namespace std;


void insertionSort(int A[],int n,int g,int &cnt)
{
	for(int i=g;i<n;i++)
	{
		//print (A,n);
		int v=A[i];
		int j=i-g;
		while(j >= 0 && A[j] > v)
		{
			A[j+g]=A[j];
			j=j-g;
			cnt++;
		}
		A[j+g]=v;
	}
}

int shellSort(int A[],int n)
{
	int cnt=0;
	int m=0;
	int G[100];
	G[0]=1;
	for(int i=1;G[i-1]<=n;i++){
		G[i]=G[i-1]*3+1;
		m++;
	}
	for(int i=m;i>=0;i--)
	{
		insertionSort(A,n,G[i],cnt);
	}
	cout<<m<<endl;
	for(int i=0;i<m;i++){if(i)cout<<" ";cout<<G[i];}
	cout<<endl;
	return cnt;
}



int main()
{
	int n ;cin>>n;
	int A[100];
	for(int i=0;i<n;++i)cin>>A[i];
	int cnt=shellSort(A,n);
	cout<<cnt<<endl;
	for(int i=0;i<n;i++){
		cout<<A[i]<<endl;
	}
	return 0;
}