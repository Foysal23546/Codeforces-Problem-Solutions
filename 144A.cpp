///by myself
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxx=0,minn=arr[0];
    for(int i=0;i<n;i++)
    {
        if(maxx<arr[i])
        {
            maxx=arr[i];
        }
        if(minn>arr[i])
        {
            minn=arr[i];
        }

    }
    int maxIndex=0;
    int minIndex=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==maxx)
        {
            maxIndex=i;
            break;
        }
    }

    int t=1;
    while(t--)
    {
        for(int i=maxIndex;i>0;i--)
        {
            swap(arr[i],arr[i-1]);
            c++;
        }

    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==minn)
        {
            minIndex=i;
            break;
        }
    }
    int t2=1;
    while(t2--)
    {
        for(int i=minIndex;i<n-1;i++)
        {
            swap(arr[i],arr[i+1]);
            c++;
        }
    }

    cout<<c<<endl;

    return 0;
}
