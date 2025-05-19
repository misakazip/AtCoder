#include <bits/stdc++.h>
using namespace std;

int main(void){
    // 各種宣言
    // n個の要素をa.at(*)に代入
    int n, count=1;
    cin >> n;
    vector<int> a(n, 0);
    for(int i=0; i<n; i++){
        cin >> a.at(i);
    }
    // 小さい順に置き換え
    //cout << "Sorting..." << endl; //debug
    sort(a.begin(), a.end());

    for(int j=0; j<(n-1); j++){
        if(a.at(j) < a.at(j+1)) count++;
    }
    cout << count << endl;
}
