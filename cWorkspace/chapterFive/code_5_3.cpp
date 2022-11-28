//개구리 문제를 완화를 의식한 동적 계획법으로 풀기. 끌기 전이 형식 풀이. pull-base
#include <iostream>
#include <vector>
using namespace std;

template <class T>
void chmin(T &a, T b)
{
  if (a > b)
  {
    a = b;
  }
}

const long long INF = 1LL << 60;

int main()
{
  // input
  int N;
  cin >> N;
  vector<long long> h(N);
  for (int i = 0; i < N; ++i)
    cin >> h[i];

  // initialize long long 형태의 N개의 배열을 INF로 초기화.
  vector<long long> dp(N, INF);
  //초기 조건
  dp[0] = 0;

  //반복
  for (int i = 1; i < N; ++i)
  {
    chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
    if (i > 1)
    {
      chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
  }

  cout << dp[N - 1] << endl;
}