#include <bits/stdc++.h>
using namespace std;
void twosum(int arr[],int n,int target){
    int left=0;
    int right = n-1;
     sort(arr, arr+n);
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout<<"Yes";
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else if(sum>target)
        {
            right--;
        }
       if(left>=right){
        cout<<"No";
       }
       
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
    int target;
    cin >> target;
    twosum(arr,n,target);
   
   
    return 0;
}