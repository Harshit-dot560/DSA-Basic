#include<bits/stdc++.h>
using namespace std;
void printdivision(int n){
   
    //another method
    vector<int> ls;
    for(int i=1;i*i<=n;i++){ //O(sqrt(n))
        if(n%i==0){
            ls.push_back(i);
            if(n/i!=i){
            ls.push_back(n/i);
            }
        }
    }
    //O(no of factor*log(no of factor))
    sort(ls.begin(),ls.end());
    //O(number of factor)
    for(auto it : ls){cout<<it<<" ";}
}

int main() {
    int n;
    cin>>n;
  /*  for(int i=1;i<=n;i++){  //O(n)
       if(n%i==0){
        cout<<i<<" ";
       } 
    } */
printdivision(n);
    return 0;
}