#include <bits/stdc++.h>
using namespace std;
vector<int> SortedArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> Union;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (Union.size() == 0 || Union.back() != a[i])
            {
                Union.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (Union.size() == 0 || Union.back() != b[j])
            {
                Union.push_back(b[j]);
            }
            j++;
        }
    }
        while(i<n1){
            if(Union.size()==0||Union.back()!=a[i]){
                Union.push_back(a[i]);
            }
            i++;
        }
        while(j<n2){
            if(Union.size()==0||Union.back()!=b[j]){
                Union.push_back(b[j]);
            }
            j++;
        }
    
    return Union;
}
    int main()
    {
        vector<int> a;
        vector<int> b;
        int n1;
        int n2;
        cin >> n1;
        cin >> n2;
        for (int i = 0; i < n1; i++)
        {
            int num;
            cin>>num;
            a.push_back(num);
        }
        for (int i = 0; i < n2; i++)
        {
           int num1;
           cin>>num1;
           b.push_back(num1);
        }
       
for(auto it: SortedArray(a,b)){
    cout<<it<<" ";
}

        return 0;
    }