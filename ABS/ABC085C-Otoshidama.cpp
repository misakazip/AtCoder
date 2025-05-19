#include <bits/stdc++.h>
using namespace std;

int main(void){
    // n:お金の枚数
    // y:お金の金額
    int n, y, sum;
    cin >> n >> y;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=(n-i); j++){
            for(int k=0; k<=(n-i-j); k++){
                sum = 10000*i + 5000*j + 1000*k;
                if (sum == y){
                    if(n ==(i+j+k)){
                        cout << i << ' ' << j << ' ' << k << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}
