/*
6. Using Recursion reverse the string such as

Eg 1: Input: one two three
      Output: three two one
Eg 2: Input: I love india
      Output: india love I 
*/

#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

void rev(string arr[],int s,int e)
{
	string temp;
	if(s>=e)
	return;
	temp=arr[s];
	arr[s]=arr[e];
	arr[e]=temp;
	rev(arr,s+1,e-1);
}

int main()
{
	string s;
	string arr[100];
	getline(cin,s);
//	cout<<s<<" ";
	int l=s.length();
	
	int a=0;
	for(int i=0;i<l;i++)
	{
		//int b=0;
		if(s[i]!=' ')
		{
			arr[a]+=s[i];
		}
		else
		a++;
	}
	a++;
	
//	for(int i=0;i<a;i++)
//	cout<<arr[i]<<"\n";
	
	rev(arr,0, a);
	for(int i=0;i<a;i++)
	cout<<arr[i]<<" ";
}
