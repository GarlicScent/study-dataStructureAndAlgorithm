/*
부분합 문제: N개 양의 정수와 양의 정수 W가 주어졌을 때 정수 몇개를 골라 그 합이 W가 될 수 있는지 판정하라.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  //입력
  int N, W;
  cin >> N >> W;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
    cin >> a[i];

  // bit는 2^N개 존재하는 부분 집합 전체를 대상으로 동작
  bool exist = false;
  for (int bit = 0; bit < (1 << N); ++bit)
  {
    int sum = 0; //부분 집합에 포함된 요소의 합
    for (int i = 0; i < N; ++i)
    {
      // i번째 요소 a[i]가 부분 집합에 포함되는지 여부. 책에서 표를 보면 좀 더 쉽게 이해가 간다.
      if (bit & (1 << i))
      {
        sum += a[i];
      }
    }
    // sum이 W와 일치하는지 여부
    if (sum == W)
      exist = true;
  }

  if (exist)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}