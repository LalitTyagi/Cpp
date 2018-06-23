/*
1) Given an array, find the minimum of all the greater numbers for each element in the
array.

   
Sample: 
Array : {2 3 7 ­1 8 5 11} 
   
Output: 
{2­>3, 3­>5, 7­>8, ­1­>2, 8­>11, 5­>7, 11­>} 

*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n],arr1[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		arr1[i]=arr[i];
	}
	
	sort(arr+0,arr+n);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<"->";
		for(int j=0;j<n;j++)
		{
			if(arr1[i]==arr[j])
			{
				if(j==n-1)
				{
					cout<<"  ";
					break;
				}
				else if(arr[j]<arr[j+1])
				{
					cout<<arr[j+1]<<" ";
					break;
				}
			}
		}
	}
	
   return 0;
}

