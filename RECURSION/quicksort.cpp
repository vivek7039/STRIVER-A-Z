//quick sort 
#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low,j=high;
    while(i<j) //till single element is left
    {
        while(arr[i]<pivot  && i<high) i++; //find element greater than pivot
        while(arr[j]>=pivot && j>low) j--; //find element smaller than pivot
        if(i<j) swap(arr[i],arr[j]);//IMP if not crossed then only swap
    }
    swap(arr[low],arr[j]);// swapping pivot to move to its right position
    return j; //return the pivot
}
void quicksort(vector<int> &arr,int low,int high)
{
    if(low<high) // base condition
    {
        int partitionIndex=partition(arr,low,high); //get the right position of the pivot element
        quicksort(arr,partitionIndex+1,high); // recursive for left or less than
        quicksort(arr,low,partitionIndex-1); // recursive for right or greater than
    }
}
int main()
{
    vector<int> arr={100,20,10,30,4,5,6,7,8,9};
    quicksort(arr,0,9);
    for(auto e:arr)
    {
        cout<<e<<" ";
    }
    return 0;
}