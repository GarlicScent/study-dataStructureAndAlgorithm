//피보나치 수열을 구하는 재귀 함수를 메모이제이션하기
#include <iostream>
#include <vector>
using namespace std;

// fibo(N)의 답을 메모하는 배열
vector<long long> memo;

long long fibo(int N)
{
  // base case
  if (N == 0)
    return 0;
  else if (N == 1)
    return 1;

  // memo check
  if (memo[N] != -1)
    return memo[N];

  return memo[N] = fibo(N - 1) + fibo(N - 2);
}

int main()
{
  // memoization array memo initialize with -1
  memo.assign(50, -1);

  // fibo(49) call
  fibo(49);

  for (int N = 2; N < 50; ++N)
  {
    cout << N << " 항째: " << memo[N] << endl;
  }
}