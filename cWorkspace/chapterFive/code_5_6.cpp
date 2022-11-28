//개구리 문제를 메모이제이션 재귀로 풀기
#include <iostream>
#include <vector>
using namespace std;

template <class T>
void chmin(T &a, T b)
{
  if (a > b)
    a = b;
}

const long long INF = 1LL << 60;

int N;
vector<long long> h;
vector<long long> dp;

long long rec(int i)
{
  // DP 값이 갱신되어 있으면 그대로 반환
  if (dp[i] < INF)
    return dp[i];

  // base case: 발판 0의 비용은 0
  if (i == 0)
    return 0;

  // 답을 나타내는 변수를 INF로 초기화
  long long res = INF;

  // 발판 i-1에서 온 경우
  chmin(res, rec(i - 1) + abs(h[i] - h[i - 1]));

  if (i > 1)
  {
    chmin(res, rec(i - 2) + abs(h[i] - h[i - 2]));
  }

  return dp[i] = res;
}

int main()
{
  // input
  cin >> N;
  h.resize(N);
  for (int i = 0; i < N; ++i)
    cin >> h[i];

  // initialize
  dp.assign(N, INF);

  cout << rec(N - 1) << endl;
}