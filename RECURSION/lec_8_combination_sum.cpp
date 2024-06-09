//combination sum
#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &ans,vector<int>& candidates,vector<int>& temp,int target,int i)
{
    if(target==0)// optimization trim further calls
    {
        ans.push_back(temp);
        return;
    }
    if(i==candidates.size()) //reached at the end of the candidates array
    {
        if(target==0) //after reaching end has the goal satisfed
        {
            ans.push_back(temp);// push the solution array in the list of arrays
        }
        return; //IMP should written outside the if i.e. in any case as reached end of the candidate array hence should return
    }
    if(candidates[i]<=target) //if element is smaller than target add it to the sol array
    {
        temp.push_back(candidates[i]);
        solve(ans,candidates,temp,target-candidates[i],i); // repeat the elenent as we can take the elemnent multiple times
        temp.pop_back(); //remove it as it may not lead to the sol and do further call
    }
    solve(ans,candidates,temp,target,i+1);//skip to next index
}
int main()
{
    vector<vector<int>> ans;//to store the solution arrays 
    vector<int> temp; //to create the solution array
    int target=7;
    vector<int> candidates={2,3,6,7};
    solve(ans,candidates,temp,target,0);
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
