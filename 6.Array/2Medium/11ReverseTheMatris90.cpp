#include<bits/stdc++.h>
using namespace std;
void rotatematrix(vector<vector<int>> &mat){
    int n=mat.size();
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           swap(mat[j][i],mat[i][j]);
        }
       
        
    }
     for (int i = 0; i < n; i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
}
int main() {
       int n;
    int m;
    cin >> n;
    cin >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    rotatematrix(a);
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}