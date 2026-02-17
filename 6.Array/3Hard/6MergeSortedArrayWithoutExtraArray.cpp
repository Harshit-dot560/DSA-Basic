#include<bits/stdc++.h>
using namespace std;
void swapifGreater(long long arr1[],long long arr2[],int ind1,int ind2){
    if(arr1[ind1]>arr2[ind2]){
        swap(arr1[ind1],arr2[ind2]);
    }
}
void merge(long long arr1[],long long arr2[],int n,int m){
    int len=n+m;
    int gap=(len/2)+(len%2);
   
    while(gap>0){
         int left=0;
    int right=left+gap;
        while(right<len){
            //arr1 and arr2
            if(left<n&&right>=n){
                swapifGreater(arr1,arr2,left,right-n);

            }
            else if(left>=n){
                  swapifGreater(arr2,arr2,left-n,right-n);
            }
            else{
                  swapifGreater(arr1,arr1,left,right);
            }
            left++,right++;
        }
        if(gap==1) break;
        gap=(gap/2)+(gap%2);
    }
}
int main() {
    int n;
    int m;
    cin>>n;
    cin>>m;
    long long arr1[n],arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
     for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    
    merge(arr1,arr2,n,m);

  for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
      for (int i = 0; i < m; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    return 0;
}