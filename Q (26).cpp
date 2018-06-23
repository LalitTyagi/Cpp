/*
4. Find if a String2 is substring of String1. If it is, return the index of the first occurrence. else return -1.
Eg 1:Input:
        String 1: test123string
         String 2: 123
        Output: 4
Eg 2: Input:
        String 1: testing12
        String 2: 1234 
        Output: -1
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int l1=s1.length();
	int l2=s2.length();
	int a;
	
	for(int i=0;i<=l1-l2;i++)
	{
		a=1;
		if(s1[i]==s2[0])
		{
			int b=i+1;
			for(int j=1;j<l2;j++)
			{
				if(s1[b]==s2[j])
				{
					a++;
					b++;
				}
				else
				break;
			}
		}
		
		if(a==l2)
		{
			cout<<"True";
			break;
		}	
	}
	if(a!=l2)
	cout<<"False";
}
