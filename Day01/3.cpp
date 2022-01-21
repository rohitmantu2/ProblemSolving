#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int search;
    cin>>search;
    int start=0,end=n-1;
    int flag=0;
    sort(a,a+n);
    while(start<end)
    {
        int mid=start+end/2;
        if(a[start]==search||a[end]==search||a[mid]==search)
        {
            cout<<"element found"<<"\n";
            flag=1;
            break;
        }
        else
        {
            if(a[mid]>search)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
    }
    if(flag==0)
    {
        cout<<"element not found";
    }
}