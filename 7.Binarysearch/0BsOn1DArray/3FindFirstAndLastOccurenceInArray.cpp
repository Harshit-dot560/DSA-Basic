#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[],int n,int x){
    int low=0;
    int high=n-1;
   int  first=-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==x){
        first=mid;
        high=mid-1;

    }
    else if(arr[mid]<x){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
   }
return first;
}
int lastOccurence(int arr[],int n,int x){
    int low=0;
    int high=n-1;
   int  last=-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==x){
        last=mid;
        low=mid+1;

    }
    else if(arr[mid]<x){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
   }
return last;
}
pair<int,int> firstAndLastOccurence(int arr[],int n,int k){
    int first=firstOccurence(arr,n,k);
    if(first==-1) return {-1,-1};
    int last=lastOccurence(arr,n,k);
    return{first,last};
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
   pair<int,int> ans=firstAndLastOccurence(arr,n,target);
   cout<<ans.first<<" ";
   cout<<ans.second<<" ";

    return 0;
}