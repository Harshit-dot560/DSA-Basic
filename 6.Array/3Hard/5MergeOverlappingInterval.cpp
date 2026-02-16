#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> MergeOverlapping(vector<vector<int>> &arr){
    int n=arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(ans.empty()||arr[i][0]>ans.back()[1]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1]=max(arr[i][1],ans.back()[1]);
        }
    }
    return ans;
}
int main() {
       int n;

    cin >> n;
    
    vector<vector<int>> a(n,vector<int> (2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }   
    }
   vector<vector<int>> ans= MergeOverlapping(a)   ;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}