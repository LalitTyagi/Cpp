/*
Program 3:
Find the union intersection of two list and also find except (remove even elements from list1 and odd elements from list2)
Input
7 
1 3 4 5 6 8 9
5
1 5 8 9 2

List 1: 		1,3,4,5,6,8,9
List 2: 		1,5,8,9,2
1

Union: 			1,3,4,5,6,8,9,2
Intersection: 	1,5,8,9
Except: 		1,3,5,9,8,2 

*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,m,i,j,k,l,a;
	cin>>n;
	int arr1[n];
	for(i=0;i<n;i++)
	cin>>arr1[i];
	
	cin>>m;
	int arr2[m];
	for(i=0;i<m;i++)
	cin>>arr2[i];

	
	int arr_u[n+m];
	
	if(n>m)
	a=m;
	else
	a=n;
	
	int arr_i[a];
	
	int kk=0;
	int ii=0;
	for(i=0;i<n;i++)
	{
		arr_u[kk]=arr1[i];
		kk++;
	}
	
	for(j=0;j<m;j++)
	{
		int c=0;
		for(k=0;k<n;k++)
		{
			if(arr2[j]==arr1[k])
			{
				c=1;
				break;
			}
		}
		if(c==0)
		{
			arr_u[kk]=arr2[j];
			kk++;
		}
		else
		{
			arr_i[ii]=arr2[j];
			ii++;
		}
	}
	
	cout<<"Union.:";
	for(l=0;l<kk;l++)
	cout<<arr_u[l]<<" ";
	
	cout<<"\nIntersection.:";
	for(l=0;l<ii;l++)
	cout<<arr_i[l]<<" ";
	
	cout<<"\nExcept.:";
	for(i=0;i<n;i++)
	{
		if((arr1[i]%2)!=0)
		cout<<arr1[i]<<" ";
	}
	for(i=0;i<m;i++)
	{
		if((arr2[i]%2)!=1)
		cout<<arr2[i]<<" ";
	}
	
	return 0;
	
}
