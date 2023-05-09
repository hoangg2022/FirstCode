#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;cin>>n;
    int a[n];
    bool check;
    map <int,int> mp;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        if(pow(a[i],2)+pow(a[i+1],2)-pow(a[i+2],2)==0){

            check=true;
            break;
        }
       
    }
    if(check){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}