//개구리 문제를 동적 계획법으로 풀기.
// N=7, h=(2,9,4,5,1,6,10)
#include <iostream>
#include <vector>
using namespace std;
const long long INF = 1LL << 60; // 2^60 을 의미한다. 0001 을 1ll << 1; 하면 2^1. 1ll << 60; 2^60.

int main()
{
  // input
  int N;
  cin >> N;
  vector<long long> h(N);
  for (int i = 0; i < N; ++i)
    cin >> h[i];

  //배열 dp를 정의 (배열 전체를 무한대를 의미하는 값으로 초기화)
  vector<long long> dp(N, INF);

  dp[0] = 0;

  for (int i = 1; i < N; ++i)
  {
    if (i == 1)
      dp[i] = abs(h[i] - h[i - 1]);
    else
      dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
  }

  cout << dp[N - 1] << endl;
}