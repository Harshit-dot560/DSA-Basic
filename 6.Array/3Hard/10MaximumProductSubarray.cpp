#include<bits/stdc++.h>
using namespace std;
int MaximumProduct(int arr[],int n){
  int  maxi=1;
    int pre=1, suff=1;
    for (size_t i = 0; i <n ; i++)
    {
      if(pre==0) pre==1;
      if(suff==0) suff==1;
      pre=pre*arr[i];
      suff=suff*arr[n-i-1];
      maxi=max(maxi,max(pre,suff));

    }
   return maxi; 
}
int main() {
     int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << MaximumProduct(arr, n);
    return 0;
}