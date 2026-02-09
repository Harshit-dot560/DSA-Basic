#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int dup=n;
    int revnum=0;
    while(n>0){
        int ld=n%10;
        n=n/10;
        revnum=(revnum*10)+ld;

    }
    if(dup==revnum){
        cout<<"It is pallindrome";
    }
    else{
        cout<<"It is not";
    }
    return 0;
}