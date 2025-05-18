#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, alice=0, bob=0;
    cin >> n;
    vector<int> a(n, 0);

    for(int i=0; i<n; i++){
        cin >> a.at(i);
    }
//    cout << "Sorting..." << endl; //debug
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
//    cout << "Finish sort" << endl; //debug

    for(int j=0; j<n; j++){
        if(j%2 == 0){
            alice += a.at(j);
        }else{
            bob += a.at(j);
        }
    }

    cout << (alice - bob) << endl;
}