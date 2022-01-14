#include<iostream>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>p;
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==p)
        {
            l++;
            break;
        }
    }
    if(l==0)
    {
        cout<<"element not found";
    }
    else{
        cout<<"element found";
    }
}