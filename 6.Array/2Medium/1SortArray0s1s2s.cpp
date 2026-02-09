#include <bits/stdc++.h>
using namespace std;
void sortarray(vector<int> &a, int n)
{
    int low =0, mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            mid++;
            low++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    sortarray(a, n);

    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}