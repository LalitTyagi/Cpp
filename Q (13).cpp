/*
Given bigger NxN matrix and a smaller MxM matrix print TRUE if the smaller matrix can be found in the bigger matrix else print FALSE
*/

#include<iostream>
using namespace std;

int main()
{
	int n,m,flag,a,b,c,d;
	cin>>n>>m;
	
	int arr1[n][n],arr2[m][m];
	
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>arr1[i][j];
	
	for(int i=0;i<m;i++)
	for(int j=0;j<m;j++)
	cin>>arr2[i][j];
	
	for(a=0;a<n-m;a++)
	{
		for(b=0;b<n-m;b++)
		{
			flag=0;
			if(arr1[a][b]==arr2[0][0])
			{
				for(c=0;c<m;c++)
				{
					for(d=0;d<m;d++)
					{
						if(arr1[c+a][d+b]!=arr2[c][d])
						{
							flag=1;
							break;
						}
					}
					if(flag==0)
					{
						break;
					}
				}
				if(flag==0)
					{
						break;
					}
			}
		}
		if(flag==0)
			{
				break;
			}
	}
		if(flag==1)
		cout<<"False";
		else
		cout<<"TRUE";
			
		return 0;
	
}
