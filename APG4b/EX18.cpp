#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector <char>> data(N, vector<char>(N, '-'));

  for(int j=0; j<M; j++){
    //cout << "Setting..." << j << endl;
    data.at(A.at(j)-1).at(B.at(j)-1) = 'o';
    data.at(B.at(j)-1).at(A.at(j)-1) = 'x';
    //cout << "Set" << j << endl;
  }

  for(int k=0; k<N; k++){
    for(int l=0; l<N; l++){
        cout << data.at(k).at(l);
        if(l == (N-1)) cout << endl;
        else cout << ' ';
    }
  }
}
