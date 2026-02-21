#include <bits/stdc++.h>
using namespace std;
int findmax(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(arr[i], maxi);
    }
    return maxi;
}
int findtotalhr(int arr[], int hour, int n)
{
    int reqtime = 0;
    for (int i = 0; i < n; i++)
    {
        reqtime += ceil((double)arr[i] / (double)hour);
    }
    return reqtime;
}
int MinRateToEatBanana(int arr[], int n, int k)
{
    int low = 1;
    int high = findmax(arr, n);
    
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int totalhr = findtotalhr(arr, mid, n);
        if (totalhr <= k)
        {
         
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    int n, h;
    cin >> n;
    cin >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
cout<<MinRateToEatBanana(arr,n,h);
    return 0;
}