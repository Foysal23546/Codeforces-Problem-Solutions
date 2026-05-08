#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;/// input the number of cards on the table
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];/// inputting each card number
    }
    int sereja=0,dima=0;
    int left =0,right=t-1;
    int turn=0;
    while(left<=right)
    {
        int pv;///getting a value
        if(arr[left]>=arr[right])
        {
            pv=arr[left];
            left++;
        }else
        {
            pv=arr[right];
            right--;
        }
        if(turn%2==0)
        {
            sereja+=pv;
        }else
        {
            dima+=pv;
        }
        turn++;
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}
