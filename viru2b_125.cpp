#include<iostream>
using namespace std;
int main()
{
	int a[10],n;
	cout<<"enter the no' of elements u want to enter";
	cin>>n;
	cout<<"enter array elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		
	}
	cout<<"enter l"<<endl;;
	int l;
	cin>>l;
	for(int i=n-l; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
	
	/*
	for (i = 0; i < n-1; i++)  
    {  
        
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
             = j;  
  
          
        
			int temp=a[i];
				a[i]=min_idx;
				min_idx=temp;
    }  
}  
	
	/*cout<<"your sorted array elements are"<<endl;
	for(int i=0;i<n; i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"enter k";
	int k;
	cin>>k;
	cout<<a[k-1];
	*/
	
	return 0;
}
