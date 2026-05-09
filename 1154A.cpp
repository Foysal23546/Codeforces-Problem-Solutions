#include<iostream>
using namespace std;
int main()
{
    int a[4];
    int m=0,ii;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<4;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
            ii=i;
        }
    }
    for(int i=0;i<4;i++)
    {
        if(ii==i)
        {
            continue;
        }else{
            cout<<m-a[i]<<" ";
        }
    }
    return 0;
}
