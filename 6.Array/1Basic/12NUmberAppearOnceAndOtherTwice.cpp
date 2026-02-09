#include<bits/stdc++.h>
using namespace std;
int getsingleElement(int arr[],int n){
int xorr=0;
for(int i=0;i<n;i++){
    xorr=xorr^arr[i];
}
return xorr;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<getsingleElement(arr,n);
    
    return 0;
}