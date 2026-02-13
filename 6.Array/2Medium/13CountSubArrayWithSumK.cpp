#include<bits/stdc++.h>
using namespace std;
int Findallsubarray(vector<int> &a,int k){
    map<int,int> mpp;
    mpp[0]=1;
    int cnt=0;
    int presum=0;
    for (int i = 0; i < a.size(); i++)
    {
       presum+=a[i];
       int remove=presum-k;
       cnt+=mpp[remove];
       mpp[presum]+=1;
    }
   return cnt; 
}
int main() {
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    cout<<Findallsubarray(ar,k);
    
    return 0;
}