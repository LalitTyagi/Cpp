/*
1. Arrange the numbers in descending order depending on the no. of factors available for each number.
I/P: {6,8,9}
O/P: {8,6,9} or {6,8,9}
Reason: factors of 8 (1,2,4,8), factors of 6 (1,2,3,6), factors of 9 (1,3,9).
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int arr1[n]={0};
	for(int i=0;i<n;i++)
	{
		int a=0;
		cin>>arr[i];
		for(int j=1;j<=arr[i];j++)
		{
			if((arr[i])%j == 0)
			a++;
		}
		arr1[i]=a;
	}
	
	for(int i=0;i<n;i++)
	cout<<arr1[i];
	
	return 0;
	
}
