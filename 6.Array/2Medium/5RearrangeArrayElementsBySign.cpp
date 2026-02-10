#include <bits/stdc++.h>
using namespace std;
vector<int> Rearrange(int arr[], int n)
{
    int posindex = 0;
    int negindex = 1;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if(negindex<n){
            a[negindex] = arr[i];
            negindex += 2;
            }
        }
        else
        {
            if(posindex<n){
            a[posindex] = arr[i];
            posindex += 2;
            }
        }
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   vector<int> ans= Rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout <<ans[i] <<" ";
    }
    return 0;
}