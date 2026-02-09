#include <bits/stdc++.h>
using namespace std;
vector<int> Intersection(vector<int> a, int n, vector<int> b, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n1; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    for (int i = 0; i < n2; i++)
    {
        int num1;
        cin >> num1;
        b.push_back(num1);
    }
    for (auto it : Intersection(a, n1, b, n2))
    {
        cout << it << " ";
    }
    return 0;
}