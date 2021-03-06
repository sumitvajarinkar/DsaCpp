/*
Given an sorted/unsorted array and a number X, we need to
find if there is a pair in the array with sum equal to X.

sorted :
		1. Use 2 pointer gives O(n) O(1)
		2. Hashing- O(n) O(n)
unsorted :
		1. use Hashing gives O(n) O(n)
		2. 2 pointer - O(n log n) [to sort] + O(n) = O(n log n) O(1)

Approach 2
O(n) O(1)

sorted i/p
i/p : 2 4 8 9 11 12 20 30 Sum: 23
o/p yes(11+12)
*/

#include<bits/stdc++.h>
using namespace std;

bool paired(int arr[], int n, int sum)
{
    int l = 0, h = n-1;
    int mid;
    while(l <= h)
    {
		//if start + end === sum
        if(arr[l] + arr[h] == sum)
          return true;

		//if sum > given sum then h-- highest value will be decrease
        else if(arr[l] + arr[h] > sum)
             h--;
		//if sum < given sum then l-- lowest value will be increase
        else l++;
    }
    return false;
}
int main()
{
	int n,sum;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>sum;
	if(paired(arr,n,sum))
		cout<<"Yes";
	else
		cout<<"No";
	return 0;

}
