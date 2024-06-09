//prints the first seq and stop
#include<bits/stdc++.h>
using namespace std;
void print_arr(vector<int> &arr)
{
    if(arr.size()==0)
    {
        cout<<"{}"<<endl;
        return;
    }
    for(auto e:arr)
    {
        cout<<e;
    }
    cout<<endl;
    return;
}
bool subseqe(vector<int> &arr,int n,int a[],int i)
{
    if(i==n)
    {   
        print_arr(arr);
        return true; // found break the recusrion and the tree
    }
    arr.push_back(a[i]);
    if (subseqe(arr,n,a,i+1)) return true;  // found break the recusrion and the tree
    arr.pop_back();
    if(subseqe(arr,n,a,i+1)) return true;  // found break the recusrion and the tree
    return false;  //not found break the recusrion and the tree
}
int main()
{
    int a[]={3,1,2};
    int n=3;
    vector<int> ds;
    cout<<"Generating subsequences using recursion"<<endl;
    subseqe(ds,n,a,0);
    return 0;
}