#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long x,y,a,b;
        cin>>x>>y>>a>>b;
        if(x>y) swap(x,y);
        long long cost1=(x+y)*a;
        long long cost2=(x*b)+((y-x)*a);
        cout<<min(cost1,cost2)<<endl;
    }
    return 0;
}
