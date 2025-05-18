#include <bits/stdc++.h>
using namespace std;

int check(int x, int y, int z){
    // xの各桁の総数がy以上z以下である事を示す
    // x1はxの値を保存する用
    //cout << "checking..." << endl; //debug
    int sum=0, x1=x;
    while(x!=0){
        sum += x%10;
        x /= 10;
    }
    if(y<=sum){
        if(sum<=z){
            return x1;
            //cout << "Return" << endl; //debug
        }
    }
    return 0;
}

int main(void){
    int a, b, n, count=0;
    cin >> n >> a >> b;

    for(int i=1; i<=n; i++){
        count += check(i, a, b);
        //cout << check(i, a, b) << endl; // debug
    }
    cout << count << endl;
}