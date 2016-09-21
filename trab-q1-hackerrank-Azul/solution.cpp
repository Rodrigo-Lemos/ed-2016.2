#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
        int n, k;
        //ifstream arq;
        //arq.open("input3.txt", ios::in);
        //arq>>n>>k;
        cin>>n>>k;
        vector<bool> dp(k + 1);
        vector<int> itm(n);
        dp[0] = true;
        for(int i = 0; i < n; ++ i){
            //arq>>itm[i];
            cin>>itm[i];}
        for(int i = 0; i < n; ++ i){
            for(int j = 0; j + itm[i] <= k; ++ j){
                if(dp[j])
                    dp[j + itm[i]] = true;
            }
        }
        int ans = 0;
        for(int i = k; k >= 0; -- k){
            if(dp[k]){
                ans = k;
                break;
            }
        }
        cout<<ans;

    return 0;
}
