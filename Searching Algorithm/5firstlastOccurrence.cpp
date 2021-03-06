//First and last occurrence of an element
/*i/p : arr[] :{1,10,10,10,20,20,40} x=20
o/p : 4 (20 is at index 4 which is first occur in given array

i/p : arr[] :{1,10,10,10,20,20,40} x=20
o/p : 5 (20 is at index 4 which is first occur in given array
*/
#include<bits/stdc++.h>
using namespace std;

firstOccur(int arr[],int n,int x)
{
	int low=0,high=n-1,res=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid] == x)
			{
				res=mid; //stored mid
			high=mid-1;
			}
		else if(arr[mid] > x)
			high=mid-1;
	    else
			low=mid+1;
	}
	return res;
}

lastOccur(int arr[],int n,int x)
{
	int low=0,high=n-1,res=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid] == x)
			{
				res=mid; //stored mid
			low=mid+1;
			}
		else if(arr[mid] < x)
			low=mid+1;
	    else
			high=mid-1;
	}
	return res;
}

int main()
{
		int n,x,op;
	cout<<"Enter no. of element \n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements :\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter searching element\n";
	cin>>x;
		while(1){
			cout<<"Enter 1 for first occurrence or 2 for last occurrence\n";
	    cin>>op;
	if(op==1)
		cout<<"At index of "<<firstOccur(arr,n,x)<<endl;
	else if(op==2)
		cout<<"At index of "<<lastOccur(arr,n,x)<<endl;
	else
		cout<<"Enter correct option\n";
		}
	return 0;
}
