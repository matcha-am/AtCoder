#include <bits/stdc++.h>
using namespace std;

int main() {
  string W;
  cin >> W ;
  for (int i = 0; i < W.size(); i++){
    if ((W.at(i) != 'a') && (W.at(i) != 'i') && (W.at(i) != 'u') && (W.at(i) != 'e') && (W.at(i) != 'o')){
      cout << W.at(i);
    }
  }
  cout << endl;
}