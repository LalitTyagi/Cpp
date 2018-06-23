/*
1) Print the given pattern:
Input:
N= 3, M=3
Output:
X X X
X 0 X
X X X

N=4 M=5
Output:
X X X X
X 0 0 X
X 0 0 X
X 0 0 X
X X X X

Input:
N=6 M=7
X X X X X X
X 0 0 0 0 X
X 0 X X 0 X
X 0 X X 0 X
X 0 X X 0 X
X 0 0 0 0 X
X X X X X X
*/


#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	int N=n;
	int M=m;
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		arr[i][j]='0';

	}
	
	int a,b,i=0;
	
	while(i<=n  &&  i<=m)
	{
		a=b=i;
			while(b<n)
		{
			arr[a][b]='X';
			b++;
		}
		b--;
		while(a<m)
		{
			arr[a][b]='X';
			a++;
		}
		a--;
		while(b>i)
		{
			arr[a][b]='X';
			b--;
		}
		while(a>i)
		{
			arr[a][b]='X';
			a--;
		}
		
		i=i+2;
		n=n-2;
		m=m-2;
	}
	
	
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		cout<<arr[i][j]<<" ";
		
		cout<<"\n";
	}
	
	return 0;
	
}


