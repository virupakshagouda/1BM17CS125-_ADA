#include<iostream>
using namespace std;
 
int selection(int A[], int n);
int bubble(int A[], int n);
int split(int arr[],int l,int h);

int main()
{
int n,i,*arr;
cout<<"Enter the number of elements of array for this : ";
cin>>n;
arr=new int[n];
cout<<"Enter the array elements :";
for(i=0;i<n;i++)
    cin>>arr[i];
 int sel=selection(arr,n);
 int b=bubble(arr,n);
 int sp=split(arr,0,n-1);
 cout<<"Number of elements comparision took by an algoritm are : \n";
 cout<<"Selection sort: "<<sel;
 cout<<"\nbubble sort: "<<b;
 cout<<"\nmerge sort: "<<sp;
return 0;
}
 
 int selection(int A[], int n){
	int i,j,temp, min,count=1;
	for(i=0;i<n-1;i++){ 
		min=i;
		for(j=i+1;j<n;j++){
                 count++;
	       if(A[j]<A[min]) min = j;
		}
		temp  =A[i];
		A[i] = A[min];
		A[min]=temp;
	}
     return count;
}

int bubble(int A[], int n){
	int i,j,temp,count=1;;
	for(i=0;i<n;i++){
               
		for(j=0; j<n-1-i;j++){
                         count++;
			if(A[j]>A[j+1]){
				temp = A[j+1];
				A[j+1]=A[j];
				A[j]=temp;
			}
		}
	}
     return count;
}


int combine(int arr[],int low,int mid,int high)
{ 
  int i=low,j=mid+1,k=low,c[high+1],count=1;
  while(i<=mid && j<=high)
 {  count++;
    if(arr[i]>arr[j])
          c[k++]=arr[j++];
    else
        c[k++]=arr[i++];
}

 if(i>mid)
    { 
	while(j<=high)

       {  
           c[k++]=arr[j++];
       }
   }
   
      if(j>high)
      { 
         while(i<=mid)
         { 
           c[k++]=arr[i++];
         }
      }
for(i=low;i<=high;i++)
   { arr[i]=c[i]; }
return count;
}

int split(int arr[],int l,int h)
{  int mid=0,c;
  if(l<h)
  {
        mid=(l+h)/2;
        split(arr,l,mid);
        split(arr,mid+1,h);
        c=combine(arr,l,mid,h);
        
  }
return c;
}