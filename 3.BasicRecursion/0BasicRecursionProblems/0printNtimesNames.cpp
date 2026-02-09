#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
if(i>n) return; //TC->O(n) SC->O(n)
cout<<"Name"<<" ";
f(i+1,n);
}
int main() {
    int n;
    cin>>n;
    f(1,n);
    return 0;
}