#include <bits/stdc++.h>
using namespace std;

int main(void){
    // n: 移動回数
    int n, t, last_x=0, last_y=0, x, y, count;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> t >> x >> y;
        count = x - last_x + y - last_y;
        if((count > t)||((t - count)%2 != 0)){
            cout << "No" << endl;
            return 0;
        }
        last_x = x;
        last_y = y;

    }
    cout << "Yes" << endl;
    return 0;
}
