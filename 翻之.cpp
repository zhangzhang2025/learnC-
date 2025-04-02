//
// Created by zhangzhang on 2025/4/2.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> vStr(n);
    for(int i = 0; i < n; i++){
        cin >> vStr[i];
    }
    map<string, int> mStrInt;

    for(int i = 0; i < m; i++){
        string s;
        for(int j = 0; j < n; j++){
            s += vStr[j][i];
        }
        mStrInt[s]++;
    }
    int max = 0;
    for(const auto &it:mStrInt){
        if(it.second > max){
            max = it.second;
        }
    }
    cout << max << endl;
}