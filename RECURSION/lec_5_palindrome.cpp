// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long sum(int n)
{
    if(n==0) return 1;
    return n*sum(n-1);
}
void swap(int *a,int *b)
{
    int *c;
    c=a;
    a=b;
    b=c;
}
void rswap(int a[],int l,int r)
{
    if(l>=r) return;
    swap(a[l],a[r]);
    rswap(a,l+1,r-1);
}
void rswap(string &a,int l,int r)
{
    if(l>=r) return;
    swap(a[l],a[r]);
    rswap(a,l+1,r-1);
}
// void rswap()
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    int a[]={10,20,30,40,50};
    for(int i=0;i<(5/2);i++)
    {
        swap(a[i],a[5-i-1]);
    }
    for(auto e:a)
    {
        cout<<e<<" ";
    }
    rswap(a,0,4);
    cout<<endl;
    for(auto e:a)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    string s="madam";
    string s1="madap";
    rswap(s1,0,4);
    if(s==s1)
    {
        cout<<"Palindrome"<<endl;
    }
    else cout<<"Not palindrome";
    cout<<"S1 inverted is : "<<s1<<endl;
    
    return 0;
}
