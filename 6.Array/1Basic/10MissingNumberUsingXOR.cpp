#include <bits/stdc++.h>
using namespace std;
int missingnumber(int arr[], int N)
{
    int XOR1 = 0, XOR2 = 0;
    int n = N - 1;
    for (int i = 0; i < n; i++)
    {
        XOR2 = XOR2 ^ arr[i];
        XOR1 = XOR1 ^ (i + 1);
    }
    XOR1 = XOR1 ^ N;
    return XOR1 ^ XOR2;
}
int main()
{
    int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    cout << missingnumber(arr, n);
    return 0;
}