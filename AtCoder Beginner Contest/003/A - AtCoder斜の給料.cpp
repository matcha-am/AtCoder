#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum = 0;
  for(int i = 0; i < N; i++){
    sum += 10000*(i+1);
  }
  cout << sum/N << endl;
}