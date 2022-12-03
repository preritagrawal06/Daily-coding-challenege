#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>candles;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        candles.push_back(k);
    }
    int p=count(candles.begin(),candles.end(),*max_element(candles.begin(),candles.end()));
    cout<<p<<endl;
    return 0;
}