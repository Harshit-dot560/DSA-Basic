#include<bits/stdc++.h>
using namespace std;
int f(int arr[],int n ,int x){
int low=0;
int ans=n;
int high=n-1;
while(low<=high){
    int mid =(low+high)/2;
    if(arr[mid]>=x){
        ans=mid;
high=mid-1;
    }
    else{
low=mid+1;
    }
}
}
int main() {
    
    int n;
    cin >> n;
    int target;
    cin >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << f(arr,n, target);

    return 0;
}