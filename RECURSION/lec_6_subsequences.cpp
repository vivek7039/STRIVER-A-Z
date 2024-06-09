//The time complexity will be (O(2^n)*n) nearly.
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
void subseqe(vector<int> &arr,int n,int a[],int i)
{
    if(i==n)
    {   
        print_arr(arr);
        return;
    }
    arr.push_back(a[i]);
    subseqe(arr,n,a,i+1);
    arr.pop_back();
    subseqe(arr,n,a,i+1);
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