#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
  int size = data.size() - 1;
  int count = 0;
  for (int i; i<size; i++){
    if (data.at(i) == data.at(i+1)){
      count ++;
    }
  }
  if (count > 0){
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}