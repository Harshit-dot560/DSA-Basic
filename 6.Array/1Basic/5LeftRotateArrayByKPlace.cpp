#include <bits/stdc++.h>
using namespace std;
void reverse1(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void LeftRotate(int arr[], int d, int n)
{
    reverse1(arr, 0, d - 1);
    reverse1(arr, d, n - 1);
    reverse1(arr, 0, n - 1);
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
    int d;
    cin >> d;
    LeftRotate(arr, d, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}