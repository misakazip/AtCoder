#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;
    vector<string> a = {"dream", "dreamer", "erase", "eraser"};

    for(int i=0; i<a.size();i++){
        for(int j=0; j<a.size(); j++){
            if (s == (a.at(i)+a.at(j))){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
