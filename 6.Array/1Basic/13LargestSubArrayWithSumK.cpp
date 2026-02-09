#include <bits/stdc++.h>
using namespace std;
int LargestSubarrayWithSumK(int arr[], int n, long long k)
{
    int left = 0;
    int right = 0;
    long long sum = arr[0];
    int maxlen = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += arr[right];
    }
    return maxlen;
}
int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    cout << LargestSubarrayWithSumK(arr, n, k);
    return 0;
}