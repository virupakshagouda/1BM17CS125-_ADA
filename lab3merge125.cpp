
#include<iostream>
using namespace std;

void combine(int arr[],int low,int mid,int high)

{ 
  int i=low,j=mid+1,k=low,c[high+1];
  while(i<=mid && j<=high)
 {
    if(arr[i]>arr[j])
          c[k++]=arr[j++];
    else
        c[k++]=arr[i++];
}
 if(i>mid)
    { while(j<=high)
       {   c[k++]=arr[j++];  }
  }
 if(j>high)
    { while(i<=mid)
         { c[k++]=arr[i++]; }
    }
for(i=low;i<=high;i++)
   arr[i]=c[i];

}

void split(int arr[],int l,int h)
{  int mid=0;
  if(l<h)
  {
        mid=(l+h)/2;
        split(arr,l,mid);
        split(arr,mid+1,h);
        combine(arr,l,mid,h);
  }
}


int main()
{
int n,i,*arr;
cout<<"Enter the number of elements of array : ";
cin>>n;
arr=new int[n];
cout<<"Enter the array elements :";
for(i=0;i<n;i++)
    cin>>arr[i];
split(arr,0,n-1);
cout<<"array in ascending order";
for(i=0;i<n;i++)
   cout<<arr[i]<<" ";
return 0;
}
