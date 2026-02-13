#include<bits/stdc++.h>
using namespace std;
vector<int> Majority(vector<int> &v){
    int n=v.size();
    int cnt1=0,cnt2=0;
    int el1=INT_MIN;
    int el2=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(cnt1==0&&el2!=v[i]){
            cnt1=1;
            el1=v[i];
        }
        else if(cnt2==0&&el1!=v[i]){
            cnt2=1;
            el2=v[i];
        }
        else if(el1==v[i]) cnt1++;
        else if(el2==v[i]) cnt2++;
        else{
            cnt1--,cnt2--;
        }
  
}
  vector<int> ls;
    cnt1=0,cnt2=0;
    int mini = (int)(n/3)+1;
    for (int i = 0; i < n; i++)
    {
        if(el1==v[i]) cnt1++;
        if(el2==v[i]) cnt2++;
    }
if(cnt1>=mini) ls.push_back(el1);
if(cnt2>=mini) ls.push_back(el2);
return ls;
}
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
vector<int> ans=Majority(v);
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<" ";
}

    
    return 0;
}