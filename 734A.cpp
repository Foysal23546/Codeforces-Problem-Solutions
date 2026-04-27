#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    string s;
    cin>>a;
    cin>>s;
    int sum1 = 0, sum2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            sum1++;
        }else if(s[i]=='D'){
            sum2++;
        }
    }
    if(sum1>sum2){
        cout<<"Anton";
    }else if(sum1<sum2){
        cout<<"Danik";
    }else if(sum1==sum2){
        cout<<"Friendship";
    }
    return 0;
}

