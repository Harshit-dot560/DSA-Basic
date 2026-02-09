#include <bits/stdc++.h>
using namespace std;
int f(int arr[], int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] >= arr[pivot] && i <= high - 1)
        {
            i++;
        }
        while (arr[j] < arr[pivot] && i >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[pivot]);
    return j;
}
void QS(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition = f(arr, low, high);
        QS(arr, low, partition - 1);
        QS(arr, partition + 1, high);
    }
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
    QS(arr, 0, n-1);
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
