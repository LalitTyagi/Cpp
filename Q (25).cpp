/*
3. Given a few pairs of names in the order child, father. The input is a person name and level number. The output should be the number of children in that particular level for the person given.
Example:
Input:
[
{Ram, Syam},
{Akil, Syam},
{Nikil, Ram},
{Subhash, Ram},
{Karthik, Akil}
];

Syam 2

Output: 3 (Syam has Ram and Akil in level 1 and in level 2 he have Nikil, Subhash, Karthik. So the answer is 3).




[ [‘Lava’ , ‘kusha] ,
[‘Rama’ , ‘Lava’] ,
[‘Lava ‘,’Ravanan’] ,
[‘Abi’ , ‘Lava’] ]
First string is the child & the second string is the parent. Print the no. of grand children available for the
given I/P.
I/P: Ravanan
O/P: 2




Given a two dimensional array of string like

  <”luke”, “shaw”>
  <”wayne”, “rooney”>
  <”rooney”, “ronaldo”>
  <”shaw”, “rooney”> 
  
  
luke shaw
wayne rooney
rooney ronaldo
shaw rooney

Where the first string is “child”, second string is “Father”. And given “ronaldo” we have to find his no of grandchildren Here “ronaldo” has 2 grandchildren.
So our output should be 2.

*/
#include<iostream>
using namespace std;
#include<string>
int main()
{
	int n;
	cin>>n;
	string arr[2][n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[0][i];
		cin>>arr[1][i];
	}
	
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[0][i]<<" ";
		cout<<arr[1][i]<<"\n";
	}
	
	int c
	cout<<"1 for child and 2 for grandchild"
	
	if(c==1)
	{
		string s;
		cin>>s;
	
		int a=0;
		for(int i=0;i<n;i++)
		if(s==arr[1][i])
		a++;
		
		cout<<a;
	}
	else if(c==2)
	{
		string s1;
		cin>>s1;
		int b=0;
		for(int i=0;i<n;i++)
		{
			if(s1==arr[1][i])
			{
				for(int j=0;j<n;j++)
				if(arr[1][j]==arr[0][i])
				b++;	
			}
		}
		
		cout<<b;
	}
	else
	{
		cout<<"You Entered something wrong."
	}	
}
