#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int c=240-k, ii=0;
    for(int i=1;i<=n;i++)
    {
        int sum =0;
        for(int j=1;j<=i;j++)
        {
            sum = sum + j*5;
        }
        if(sum<=c){
            ii=i;
        }
    }
    cout<<ii<<endl;
    return 0;
}

/// n problems, each ith problem takes 5.i problem
/// MC needs k minutes to go to party
/// How many problems can MC solve if he wants to make it to the party?
