#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a = min(((k*l)/nl),(c*d));
    int b = min(a,(p/np));
    int cc = b/n;
    cout<<cc<<endl;

    return 0;
}
