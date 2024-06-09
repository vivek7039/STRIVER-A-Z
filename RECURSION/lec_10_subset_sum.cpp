#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr,vector<int> &ans,int i,int sum)
{
    if(i==arr.size())
    {
        ans.push_back(sum);// end of the array reached
        return;
    }
    solve(arr,ans,i+1,sum+arr[i]);//select the element & modify sum
    solve(arr,ans,i+1,sum);//skip the element
}
int main()
{
    vector<int> arr={5, 2, 1};
    int n=3;
    vector<int> ans;
    solve(arr,ans,0,0);
    sort(ans.begin(),ans.end());
    for(auto e:ans)
    {
        cout<<e<<" ";
    }
    return 0;
}