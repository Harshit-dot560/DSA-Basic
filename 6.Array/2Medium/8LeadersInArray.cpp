#include<bits/stdc++.h>
using namespace std;
vector<int> Superior(vector<int> &a){
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi = max(maxi,a[i]);
    }
    return ans;
}
int main() {
      int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ans=Superior(v);
    for (auto it: ans)
    {
        cout<<it<<" ";
    }
    
    return 0;
}