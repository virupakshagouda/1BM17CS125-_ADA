#include<iostream>
using namespace std;
int main()
{
	int t,arr[10],n,num;
	cout<<"enter no' of test cases";
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
		cout<<"enter number of array elements";
		cin>>n;
		cout<<"enter the elements of sorted aray";
		for(int i=0; i<n; i++)
		{	
					cin>>arr[i];
		
		}
		cout<<"enter no u want to search";
		cin>>num;
		for(int i=0; i<n; i++)
		{
			if(arr[i]==num)
			{
				cout<<"1"<<endl;
				break;
			} 
		
			else
			{
				cout<<"-1"<<endl;
				break;
			}
	
		}	
	}
	return 0;
}