#include <bits/stdc++.h>

using namespace std;
int main(){

    int n,x;
    cin>>n;
    int arr[n],flag=0;
    cout<<"Enter "<<n<<" numbers"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Search Number:";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"Number at "<<i<<"th index"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"Number doesn't exist";
    return 0;
}