#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
  }
 
  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  int last_num=101;
  bool ans=false;
  for(int j=0; j<data.size(); j++){
    if(data.at(j) == last_num){
        ans=true;
    }
    last_num = data.at(j);
  }
  if(ans) cout << "YES" << endl;
  else cout << "NO" << endl;
}

