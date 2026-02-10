#include <bits/stdc++.h>
using namespace std;
void nextGreaterpermutation(vector<int> &v)
{
    int ind = -1;
    int n = v.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            ind = i;
            break;
        }
    }
if(ind==-1){
    reverse(v.begin(),v.end());
}
    for (int i = n - 1; i >= ind; i--)
    {
        if (v[i] > v[ind])
        {
            swap(v[i], v[ind]);
            break;
        }
    }
    reverse(v.begin()+ind+1,v.end());
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    nextGreaterpermutation(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}