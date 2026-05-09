#include<iostream>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int a;
    for(int i=1;i<=9;i++)
    {
        if((i*k)%10==0 || ((i*k)-r)%10==0)
        {
            a=i;
            break;
        }
    }
    cout<<a<<endl;

    return 0;
}
/// k= price of shovel in burles
/// r= one coin of r burles
