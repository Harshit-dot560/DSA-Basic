#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maxfreq = 0;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
          if (mpp[arr[i]] > maxfreq)
        {
            maxfreq = mpp[arr[i]];
        }
       
    }

    int q;
    cin >> q;
    // fetching
    while (q--)
    {
        int num;
        cin >> num;
        cout << mpp[num] << " ";
    }
  
    for (int i = 0; i < n; i++)
    {
        if (mpp[arr[i]] == maxfreq)
        {
            cout << "max frequency no. is " << arr[i];
            break;
        }
    }

    return 0;
}