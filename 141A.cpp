#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<c.size();j++)
        {
            if(a[i]==c[j])
            {
                c[j]='\0';
                break;
            }
        }
    }
    for(int i=0;i<b.size();i++)
    {
        for(int j=0;j<c.size();j++)
        {
            if(b[i]==c[j])
            {
                c[j]='\0';
                break;
            }
        }
    }
    int coun=0;
    for(int i=0;i<c.size();i++)
    {
        if(c[i]!='\0')
        {
            coun++;
        }
    }
    if(a.size()+b.size()==c.size() && coun==0)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
