#include<bits/stdc++.h>
using namespace std;
int f(int arr[],int low,long long high,long long target){
long long mid=(low+high)/2;
if(low>high) return -1;
if(arr[mid]==target) return mid;
else if(arr[mid]>target) return f(arr,mid+1,high,target);
else return f(arr,low,mid-1,target);
}
int main() {
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   cout<< f(arr,0,n-1,target);
    
    return 0;
}