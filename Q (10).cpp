/*

You’re given an even number n. If n=4, you have to print the following pattern :
4444
4334
4334
4444

If n=6, then the pattern should be like this :
666666
655556
654456
654456
655556
666666

*/

#include<iostream>
using namespace std;

int main()
{
	int a,a1,b,c,d,j,k;
	cin>>a;
	a1=c=a;
	
	int arr[a][a]={0};
	b=a/2;
	
	
	
	for(int i=0;i<b;i++)
	{
		d=i;
		for(j=d;j<a;j++)
		arr[i][j]=a1;
		
		j--;
		for(k=d;k<a;k++)
		arr[k][j]=a1;
		
		k--;
		for(;j>=d;j--)
		arr[k][j]=a1;
		
		j=d;
		for(;k>=d;k--)
		arr[k][j]=a1;
		
		
		a=a-1;
		a1=a1-2;
	}
	
	for(int i=0;i<c;i++)
		{
			for(int j=0;j<c;j++)
			cout<<arr[i][j];
			
			cout<<"\n";
		}
	
	
	
}
