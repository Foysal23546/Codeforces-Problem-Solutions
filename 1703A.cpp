#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        if((a[0]=='Y' || a[0]=='y') && (a[1]=='e' || a[1]=='E') && (a[2]=='S' || a[2]=='s') && a.size()==3 )
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
