"""
不正解コード
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string sanketa;
  int judg = 0;
  int i = 0;
  while( i < 3;)
  {
    cin >> judg(i);
    if(judg(i) == 1)judg++;
    i++;
  }
  cout << str(judg) << endl;
}
"""
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int judg = 0;
  for(int i = 0;i<3;i++)
  {
    cin >> s;
    if(s[i] == '1')judg++;
  }
  cout << judg << endl;
}
"""
気付き
配列のi番目の要素にアクセスする時は{配列名}[i]というふうに書く
なぜかしらんが比較演算子に””が使えないことに気づいた