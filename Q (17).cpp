/*
Help john to find new friends in social network
Input:
3
mani 3 ram raj guna
ram 3 kumar Kishore guna
mughil 3 praveen Naveen Ramesh

Output:
Raj guna kumar Kishore praveen Naveen Ramesh

*/
#include<iostream>
#include<algorithm>
using namespace std;
#include<string.h>

int main()
{
	int n,a=0;
	cin>>n;
	string arr[n];
	string arr1[100];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		int m;
		cin>>m;
		for(int j=0;j<m;j++)
		{
			cin>>arr1[a];
			a++;
		}
	}
	/*
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n";	
	for(int j=0;j<a;j++)
	cout<<arr1[j]<<" ";
	*/
	
	string arr2[a];
	int b=0;
	
	
	for(int i=0;i<a;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(arr1[i]==arr[j])
			{
				c=1;
				break;
			}
		}
		if(c==0)
		{
			arr2[b]=arr1[i];
			b++;
		}
	}
	
	/*cout<<"\n";
	for(int i=0;i<b;i++)
	cout<<arr2[i]<<" ";
	*/
	
	int d=1;
	string arr3[b];
	
	arr3[0]=arr2[0];
	for(int i=1;i<b;)
	{
		if(arr2[i]!=arr2[i-1])
		{
			arr3[d]=arr2[i];
			i++;
			d++;
		}
		else
		i++;
	}
	
	cout<<"\n";
	for(int i=0;i<d;i++)
	cout<<arr3[i]<<" ";
	
	
}
