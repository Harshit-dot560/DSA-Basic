#include <bits/stdc++.h>
using namespace std;
int majorityelement(vector<int> v)
{
    int cnt = 0;
    int el;
    for (int i = 0; i < v.size(); i++)
    {
        if (cnt == 0)
        {
              el = v[i];
            cnt = 1;
        }
        else if (v[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == el){
            cnt1++;
        }
    }
    if (cnt1 > (v.size() / 2))
    {
        return el;
    }
        return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << majorityelement(v);

    return 0;
}