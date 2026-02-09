#include<bits/stdc++.h>
using namespace std;

//parameter way
void f(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    f(i-1,sum+i);
}

//function 
int k(int n){
    if(n==0) return 0;
     return  n+k(n-1); 
    }

int main() {

    int n;
    cin>>n;
  //  f(n,0);
 cout<<k(n);
    return 0;
}