#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int minimum,maximum;
    if(a>b && a>c)maximum=a;
    if(b>a && b>c)maximum=b;
    if(c>a && c>b)maximum=c;
    if(a<b && a<c)minimum=a;
    if(b<a && b<c)minimum=b;
    if(c<a && c<b)minimum=c;
    int store1=400;
    for(int i=minimum;i<=maximum;i++)
    {
        int store2=0;
        (a>i)?store2+=(a-i):store2+=(i-a);
        (b>i)?store2+=(b-i):store2+=(i-b);
        (c>i)?store2+=(c-i):store2+=(i-c);
        if(store1>store2)
        {
            store1=store2;
        }
    }
    cout<<store1<<endl;
    return 0;
}
