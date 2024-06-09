#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &ans,vector<int> &temp,vector<int> &arr,int target,int i)
{
    if(target==0)// if we found the ans then we add it to the list of arrays and return
    {
        ans.push_back(temp);
        return;
    }
    if(i==arr.size()) return;// not required as the for loop will be skipped in this condition and automatically return
    for(int j=i;j<arr.size();j++)
    {
        if(j>i && arr[j]==arr[j-1]) continue;// if the elements are same then copies wil be present
        if(arr[j]>target) break; // if array[j] greater than target means not use to loop further as the array is sorted
        if(arr[j]<=target) //if element less than target then add it to temp array
        {
            temp.push_back(arr[j]);
            solve(ans,temp,arr,target-arr[j],j+1); //now we will call same function on reduced value of target and j+1 as we can use an element only once
            temp.pop_back();// skip that element and continue to next elenent
        }
    }
}
int main()
{
    vector<vector<int>> ans;
    vector<int> temp;
    vector<int> arr={10,1,2,7,6,1,5};
    int target=8;
    sort(arr.begin(),arr.end());
    solve(ans,temp,arr,target,0);
    for(auto e:ans) 
    {
        for(auto f:e)
        {
            cout<<f<<",";
        }
        cout<<" ";
    }
    return 0;
}