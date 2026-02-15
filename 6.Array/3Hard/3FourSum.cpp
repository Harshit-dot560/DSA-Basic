#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> FourSum(vector<int> &num,int target){
vector<vector<int>> ans;
int n=num.size();
sort(num.begin(),num.end());
for (int i = 0; i <n ; i++)
{
    if(i>0&&num[i]==num[i-1]) continue;
    for (int j = i+1; j < n; j++)
    {
        if(j!=i+1&&num[j]==num[j-1]) continue;
        int k=j+1;
        int l=n-1;
        while(k<l){
            long long sum=num[i];
            sum+=num[j];
            sum+=num[k];
            sum+=num[l];
            if(sum==target){
                vector<int> temp ={num[i],num[j],num[k],num[l]};
                ans.push_back(temp);
                k++,l--;
                while(k<l&&num[k]==num[k-1])k++;
                while(k<l&&num[l]==num[l+1])l--;

                        }
                        else if(sum<target) k++;
                        else l--;
        }
    }
    
}
return ans;
}

int main() {
       int n,target;

    cin >> n;
    cin>>target;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
       
            cin >> a[i];
        
    }
   vector<vector<int>> ans = FourSum(a,target) ;
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