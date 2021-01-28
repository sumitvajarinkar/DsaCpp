//Given an array of integers, find if it has an equ;ibrium point
//Approach 1
//O(n^2) O(1)
//i/p : arr[] : {3,4,,8-9,20,6} o/p: yes(Both side of 20 is 6)
//i/p : arr[] : {4,2,-2} o/p: yes(Both side of 4 is 0)
//i/p : arr[] : {-2,2,4} o/p: yes(Both side of 4 is 0)

#include<bits/stdc++.h>
using namespace std;
int equilibriumPoint(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
   	 int leftsum=0, rightsum=0;
     for(int j=0;j<i;j++)
     	leftsum+=arr[j];
     for(int j=i+1;j<n;j++)
     	rightsum+=arr[j];
    if(leftsum==rightsum)
    	return true;
   }
   return false;
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   if((equilibriumPoint(arr,n)==1))
	  cout<<"Yes";
	else
	   cout<<"No";
   return 0;
}
