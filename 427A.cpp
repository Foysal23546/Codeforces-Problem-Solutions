#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    int p=0, c=0;///p==number of new police, c== number of crimes
    for(int i=0;i<t;i++)
    {
        if(a[i]<0 && p<=0)
        {
            c++;
        }else if(a[i]<0 && p>0)
        {
            p--;
        }else if(a[i]>0)
        {
            p+=a[i];
        }
    }
    cout<<c<<endl;
    return 0;
}
