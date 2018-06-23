/*
Program 4:

Rotate the matrix elements
For 3*3 matrix
Input
1	2	3
4	5	6
7	8	9

Output:
4	1	2
7	5	3
8	9	6

For 4*4 matrix
Input:
1	2	3	4	
5	6	7	8
9	10	11	12
13	14	15	16

Output:
5	1	2	3
9	10	6	4
13	11	7	8
14	15	16	12
*/

#include<iostream>
using namespace std;

int main()
{
	int m,n,k;
	cin>>m>>n;
	int arr[m][n];
	int arr1[m][n]={0};
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
			
	cout<<"No of rot.";
	cin>>k;
	
	for(int q=0;q<k;q++)
	{
	
	int x=0,x1=m-1,x2=0,y=0,y1=n-1,y2=0;
	
	while(x<=x1 && y<=y1)
	{
		if(x==x1 && y==y1)
		{
			arr1[x][y]=arr[x][y];
		}
		else if(x==x1)
		{
			arr1[x][y]=arr[x][y1];
			while(y<y1)
			{
				arr1[x][y+1]=arr[x][y];
				y++;
			}
		}
		else if(y==y1)
		{
			arr1[x][y]=arr[x1][y];
			while(x<x1)
			{
				arr1[x+1][y]=arr[x][y];
				x++;
			}
		}
		else
		{
			while(y<y1)
				{
					arr1[x][y+1]=arr[x][y];
					y++;
				}
				while(x<x1)
				{
					arr1[x+1][y]=arr[x][y];
					x++;
				}
				while(y2<y)
				{
					arr1[x][y-1]=arr[x][y];
					y--;
				}
				while(x2<x)
				{
					arr1[x-1][y]=arr[x][y];
					x--;
				}
		}
		
		x++;
		y++;
		x2++;
		y2++;
		x1--;
		y1--;
	}
	
		for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				arr[i][j]=arr1[i][j];
			}
			
			
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				arr1[i][j]=0;
			}
			
	}
	
	
	
	
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			cout<<arr[i][j]<<" ";
			cout<<"\n";
		}
		
		
		
		return 0;
}



/*
4 4
1 2 3 4
5 6 7 8
9 10 11 12 
13 14 15 16
*/
