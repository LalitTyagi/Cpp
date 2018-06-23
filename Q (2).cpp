/*

Given unsorted array find all combination of the element for a given sum. Order should be maintained.

Input : 8 3 4 7 9 N=7
Output : {3 4 } {7}

*/

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	
	int n,m,p;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cin>>m;
	
	sort(arr+0,arr+n);
	
	int a,b;
	a=0;
	for(int j=0;m>=arr[j];j++)
	{
		a++;
	}
	
	//cout<<a;
	p=pow(2,a);
	
	for(int k=0;k<p;k++)
	{
		b=0;
		for(int l=0;l<a;l++)
		if(k & (1<<l))
		{
			b=b+arr[l];
		}
		//cout<<b<<"\n";
		if(b==m)
		{
			cout<<"{";
			for(int l=0;l<a;l++)
			if(k & (1<<l))
			{
				cout<<arr[l]<<" ";
			}
			cout<<"} ";
		}
			
	}
	
	return 0;
}
