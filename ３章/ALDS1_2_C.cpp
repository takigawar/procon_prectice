#include<iostream>
#include<string>
using namespace std;

void BubbleSort(string C[],int N)
{
	for(int i=0;i<N;i++)
	{
		for(int j=N-1;j>i;j--)
		{
			if(C[j][1]<C[j-1][1])
			{
				swap(C[j],C[j-1]);
			}
		}
	}
}

void SelectionSort(string C[],int N)
{
	for(int i=0;i<N;i++)
	{
		int minj=i;
		for(int j=i;j<N;j++){
			if(C[j][1]<C[minj][1])
			{
				minj=j;
			}
		}
		swap(C[i],C[minj]);
	}
}

bool isStable(string in[],string out[],int N)
{
	for(int i=0;i<N;i++)
	{
		for (int j = i+1; j < N; j++)
		{
			for(int a=0;a<N;a++)
			{
				for(int b=a+1;b<N;b++)
				{
					if(in[i][1]==in[j][1]&&in[i]==out[b]&&in[j]==out[a])return false;
				}
			}
		}
		
	}
return true;
}

int main() 
{
	int N;cin>>N;
	string A[36];
	for(int i=0;i<N;i++)cin>>A[i];
	string B[36];
	for(int i=0;i<N;i++)B[i]=A[i];
	string in[36];
	for(int i=0;i<N;i++)in[i]=A[i];
	
	BubbleSort(A,N);
	for (int i = 0; i < N; i++)
	{
		if(i)cout<<" ";
		cout<<A[i];
	}cout<<endl;
	if(isStable(in,A,N))cout<<"Stable"<<endl;
	else cout<<"Not stable"<<endl;

	SelectionSort(B,N);
	for (int i = 0; i < N; i++)
	{
		if(i)cout<<" ";
		cout<<B[i];
	}cout<<endl;
	if(isStable(in,B,N))cout<<"Stable"<<endl;
	else cout<<"Not stable"<<endl;
	
	return 0;
}