#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[],int n){
long long s=(n*(n+1))/2;
long long sn=((n*(n+1))*(2*n+1))/6;
long long s1=0,s2n=0;
for (int i = 0; i < n; i++)
{
    s1+=a[i];
s2n+= (long long )(a[i])*(long long)(a[i]);
}
long long val1=s1-s;
long long val2=s2n-sn;
val2=val2/val1;
long long x=(val1+val2)/2;
long long y=x-val1;
return {(int) x,(int) y};



}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   vector<int> ans= find(arr,n);
   for (int i = 0; i <ans.size(); i++)
   {
    cout<<ans[i]<<" ";
   }
   

    return 0;
}