//print the count of such sub arrays
#include<bits/stdc++.h>
using namespace std;
int count_K(int arr[],int i,int n,int k,int s)
{
    if(s>k) return 0; //will work for positive and help to optimize
    //above will avoid checking if sum exceeds k
    if(n==i)//reached end of the array or tree
    {
        if(s==k)
        return 1;
        return 0;
    }
    s+=arr[i];
    int l=count_K(arr,i+1,n,k,s);
    s-=arr[i];
    int r=count_K(arr,i+1,n,k,s);
    return l+r;
}
int main()
{

    int arr[]={1,1,1};
    cout<<"Count is"<<count_K(arr,0,3,2,0);
    return 0;
}