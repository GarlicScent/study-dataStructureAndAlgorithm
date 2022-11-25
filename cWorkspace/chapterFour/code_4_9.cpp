#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, const vector<int> &a)
{
  // base case
  if (i == 0)
  {
    if (w == 0)
      return true;
    else
      return false;
  }

  // a[i-1]을 선택하지 않음
  if (func(i - 1, w, a))
    return true;
  // a[i-1]을 선택.
  if (func(i - 1, w - a[i - 1], a))
    return true;
  //둘 다 false라면 false
  return false;
}

int main()
{
  // input
  int N, W;
  cin >> N >> W;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
    cin >> a[i];

  // 재귀적으로 풀기
  if (func(N, W, a))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}