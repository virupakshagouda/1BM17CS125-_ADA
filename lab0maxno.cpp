#include<iostream>
using namespace std;
int main()
{
	int n,arr[10],max;
	cout<<"enter total no's u want to add"<<endl;
	cin>>n;
	cout<<"enter all then numbers one by one"<<endl;
	for(int i=0; i<n; i++)
	{ 
		cin>>arr[i];
	}
	max=arr[0];
	for(int i=0; i<n; i++)
	{ 
		if(arr[i]>max)
			{max=arr[i];
			
			}
	}
	cout<<"maximum of integers is : "<<max<<endl;	
	
	
	
	return 0;	
}