#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n; 
    int cnt=0;
   /* for(int i=1;i<=n;i++){ //O(n)
        if(n%i==0){
            cnt++;
        }
    }
        */

// another method  O(Log(n))
for (int i = 1; i*i <=n; i++)
{
  if(n%i==0){
    cnt++;
    if(n/i!=0){
        cnt++;
    }
  }
}

    if(cnt==2) cout<<"it is prime no";
    else cout<<"it is not";
    return 0;
}