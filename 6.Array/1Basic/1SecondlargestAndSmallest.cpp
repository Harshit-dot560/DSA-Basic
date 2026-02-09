#include <bits/stdc++.h>
using namespace std;
int secondlargest(int arr[], int n)
{
    int L = arr[0];
    int SL = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > L)
        {
            SL = L;
            L = arr[i];
        }
        else if (arr[i] < L && arr[i] > SL)
        {
            SL = arr[i];
        }
    }
    return SL;
}
int secondsmallest(int arr[], int n)
{
    int S = arr[0];
    int SM = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < S)
        {
            SM = S;
            S = arr[i];
        }
        else if (arr[i] != S && arr[i] < SM)
        {
            SM = arr[i];
        }
    }
    return SM;
}
vector<int> SecondOfArray(int arr[], int n)
{
    int Slargest = secondlargest(arr, n);
    int Ssmallest = secondsmallest(arr, n);
    return {Slargest, Ssmallest};
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
   for(auto it: SecondOfArray(arr,n)){
    cout<<it<<" ";
   }

    return 0;
}