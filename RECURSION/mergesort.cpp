//merge sort 
//divide and merge
//time complexity is O(nlogn) and space is O(n)
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high)
{
    //we use 2 pointers to work with this 
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high)//compare and store accordingly
    {
        if(arr[left]<arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)//left over part
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)//left over part
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)//copying to original array
    {
        arr[i]=temp[i-low];// appropratie space in orgnal array 
    }
}
void mergesort(vector<int> &arr,int low,int high)
{
    if(low==high) return;// base case the array has only 1 element and is considered as sorted
    int mid=(low+high)/2;
    mergesort(arr,low,mid);//left tree
    mergesort(arr,mid+1,high);//right tree
    merge(arr,low,mid,high);//merge it
}
int main()
{
    vector<int> arr={100,20,10,30,4,5,6,7,8,9};
    mergesort(arr,0,size(arr)-1);//size is used to get size of an array
    for(auto e:arr)
    {
        cout<<e<<" ";
    }
    return 0;
}