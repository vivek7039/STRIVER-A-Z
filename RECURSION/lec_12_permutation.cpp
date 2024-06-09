//problem link : https://leetcode.com/problems/permutations/description/
#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &ans,vector<int> &arr,int i)
{
    if(i==arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for(int j=i;j<arr.size();j++)
    {
        swap(arr[i],arr[j]);
        solve(ans,arr,i+1);
        swap(arr[i],arr[j]);// revert the change
    }
}
int main()
{
    vector<vector<int>> ans;
    vector<int> arr={1,2,3};
    solve(ans,arr,0);
    return 0;
}