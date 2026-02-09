#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    //TC=O(log10(n)) for division any number by 10
 /*   int cnt=0;
    while(n>0){
n=n/10;
cnt=cnt+1;
    }
*/
//another method
int cnt = (int)(log10(n)+1);
    cout<<cnt;
  
    return 0;
}