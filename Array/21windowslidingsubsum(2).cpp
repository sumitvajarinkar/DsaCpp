//window sliding method for all non negative no.
//Find if there is a subarray with given sum
//Approach 2
//O(n)

/*
ip : arr[] = {1 8 30 20 7} sum = 58
o/p : true (8+30+20)
*/
#include<bits/stdc++.h>
using namespace std;
int issubsum(int arr[],int n,int sum)
{
    int curr_sum=arr[0],start=0;
    for(int end=1;end<n;end++)
    {

        while(curr_sum > sum && start<end-1 )
        {
            curr_sum-=arr[start];
            start++;
        }
        if(curr_sum==sum)
            return true;
        if(end<n)
            curr_sum+=arr[end];
    }
    return false;


}
int main()
{
     int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>sum;
    cout<<issubsum(arr,n,sum);
    return 0;
}

