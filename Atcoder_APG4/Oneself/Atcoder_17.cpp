#inclode
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  // ここにプログラムを追記
  //Aの1とPの1、2、3を比べる、Aの2とPの1、2、3を比べるというのを繰り返す
  int Answer = 0;//見つけたら増やす  
  int Look_up;
  for(int C = 0;C < N; C++){
    for (int C2 = 0; C2 < N; C2++){
      if (A.at(C) + P.at(C2) == S){
      	Answer++;
      }
    }   
  }
  cout << Answer << endl; 
}
