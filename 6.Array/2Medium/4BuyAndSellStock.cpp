#include <bits/stdc++.h>
using namespace std;
int maxprofit(int a[], int n)
{
    int minprice = a[0];
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        int cost = a[i] - minprice;
        profit = max(profit, cost);
        minprice = min(minprice, a[i]);
    }
    return profit;
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
    cout << maxprofit(arr, n);
    return 0;
}