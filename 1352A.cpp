///by myself
#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    ///test case
    int t;
    cin>>t;
    while(t--)
    {
        int n,d=0,c=0;
        cin>>n;///input each value
        int n1=n;
        while(n1>0)
        {
            n1=n1/10;
            d++;///count number of digit
        }
        int n3 =n;
        for(int i=1;i<=d;i++)
        {
            if(n3%10!=0)
            {
                c++;///count number of non zero or minimum number of summands
            }
            n3=n3/10;

        }
        cout<<c<<endl;
        int n2 = n;
        for(int i=0;i<d;i++)
        {
            if(n2%10!=0)
            {
                cout<<((n2%10)*pow(10,i));
            }
            cout<<" ";
            n2=n2/10;
        }
        cout<<endl;

    }

    return 0;
}
