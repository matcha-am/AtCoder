#include <bits/stdc++.h>
using namespace std;

// 参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(/* 呼び出し側に対応するように引数を書く */vector<vector<int>> &A, int &correct, int &wrong) {
  for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      if (A.at(i).at(j) == (i+1)*(j+1)){
        correct += 1;
      }
      else{
        A.at(i).at(j) = (i+1)*(j+1);
        wrong += 1 ;
      }
    }
  }
}


// -------------------
// ここから先は変更しない
// -------------------
int main() {
  // A君の回答を受け取る
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }

  int correct_count = 0; // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;   // ここに誤った値のマスの個数を入れる

  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);

  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  // 正しいマスの個数を出力
  cout << correct_count << endl;
  // 誤っているマスの個数を出力
  cout << wrong_count << endl;
}
