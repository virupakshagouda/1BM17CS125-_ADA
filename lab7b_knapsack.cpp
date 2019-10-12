#include <bits/stdc++.h> 
using namespace std; 
 
int max(int a, int b) { return (a > b)? a : b; }  
#include<vector>
int knapSack(int W, vector<int> wt, vector<int> val, int n)  
{
if (n == 0 || W == 0)  
    return 0;  
 
if (wt[n-1] > W)  
    return knapSack(W, wt, val, n-1);  

else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1) );  
}  

int main()  
{  
    vector<int> wt,val;
    int W,a,b;  
cout<<"Enter weight of bag : " ;
cin>>W;
cout<<"Enter weight and values ,-1 to exit: ";

while(1) 
{
if(a==-1)
   break;
 cin>>a>>b;
wt.push_back(a);
val.push_back(b);

}
    int n = val.size();
    cout<<knapSack(W, wt, val, n)<<endl;  
    return 0;  
}  
