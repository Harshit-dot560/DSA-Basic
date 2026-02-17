#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void countpair(int a[],int low,int mid,int high){

int right=mid+1;
for (int i = low; i <= mid; i++)
{
   while(right<=high&&a[i]>2*a[right])  right++;
    cnt=cnt+right-(mid+1);
   
}

}
void ms(int arr[], int low, int high)
{
    if (low >= high) return;
    int mid = (low + high) / 2;
    ms(arr, low, mid );
    ms(arr, mid + 1, high);
    countpair(arr,low,mid,high);
    merge(arr, low, mid,  high);
}
int team(int skill[],int n){
ms(skill,0,n-1);
return cnt;
}
int main()
{
   
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       
        cin>>arr[i];
    }

cout<<team(arr,n);
    return 0;
}