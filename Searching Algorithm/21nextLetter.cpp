//Find next letter of given
//Same approach as Ceil code
/*
i/p : arr[]:{a,c,f,h} X=f
o/p : h(Next letter after f) else return &
O(log n) O(1)
*/

#include<bits/stdc++.h>
using namespace std;

char nextletter(char arr[],int n,char x)
{
	int low=0,high=n-1;
	char res='&';

	//check for last element
	if(arr[n-1]==x)
		return res;

	while(low<=high)
	{
		//mid
		char mid=low+((high-low)/2); //To avoid array out of bound

		//if get given element then just return next one mid+1
		if(arr[mid] == x)
			low=mid+1;

		//as go in left side then it will get smaller element (ceil)
		else if(arr[mid] > x)
			{
				res=mid;
				high=mid-1;
			}

		else
			low=mid+1;

	}
	return arr[res];
}
int main()
{
	int n;
	char x;
	cout<<"Enter no. of element \n";
	cin>>n;
	char arr[n];
	cout<<"Enter elements :\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter searching element\n";
	cin>>x;
	char ans=nextletter(arr,n,x);
	if(ans!='&')
		cout<<"Next letter after "<<x<<" is "<<ans;
	else
		cout<<"next char not found";
	return 0;
}
