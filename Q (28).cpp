/*
Sub matrix with sum of minmum and sum of maximum
*/

#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cout<<"Value of m for mXm Matrix.:";
	cin>>m;
	cout<<"Value of n for nXn Sub-Matrix.:";
	cin>>n;
	int m1=m*m;
	int m2=n*n;
	int arr[m][m];
	int arr1[m1][m2];
	
	for(int i=0;i<m;i++)
	for(int j=0;j<m;j++)
	cin>>arr[i][j];
	
	int p,q,r,s;
	p=0;
	
	for(int i=0;i<m-n+1;i++)
	for(int j=0;j<m-n+1;j++)
	{
		q=r=0;
		for(int k=i;;k++)
		{
			s=0;
			for(int l=j;;l++)
			{
				arr1[p][q]=arr[k][l];
				q++;
				s++;
				if(s==n)
				break;
			}
			r++;
			if(r==n)
			break;
			
		}p++;
	}
	
	int arr2[p];
	
	for(int i=0;i<p;i++)
	{
		int a=0;
		for(int j=0;j<q;j++)
		a=a+arr1[i][j];
		
		//cout<<a;
		
		arr2[i]=a;
	}
	
	int min,max,minp,maxp;
	min=max=arr2[0];
	minp=maxp=0;
	
	for(int i=1;i<p;i++)
	{
		if(arr2[i]<min)
		{
			min=arr2[i];
			minp=i;
		}
		
		if(arr2[i]>max)
		{
			max=arr2[i];
			maxp=i;
		}
	}
	
	cout<<"Min value is.:"<<min;
	cout<<"\n"; 
	cout<<"Sub matrix for min value is.:\n";
	int t=0;
	for(int j=0;j<q;j++)
		{
			cout<<arr1[minp][j]<<" ";
			t++;
			if(t==n)
			cout<<"\n";
		}
	cout<<"\n";
	cout<<"Max value is.:"<<max;
	cout<<"\n";
	cout<<"Sub matrix for max value is.:";
	cout<<"\n";
	t=0;
	for(int j=0;j<q;j++)
		{
			cout<<arr1[maxp][j]<<" ";
			t++;
			if(t==n)
			cout<<"\n";
		}

	return 0;
}
