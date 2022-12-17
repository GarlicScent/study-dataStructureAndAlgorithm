/*
AtCoder Grand Contest 009 A - Multiple Array
0 이상의 정수로 이뤄진 N항 수열 A0,A1, ..., AN-1 과 N개 버튼이 주어졌을 때 i(=0,1,...,N-1)번째 버튼을 누르면 A0,A1, ..., Ai 값이 각각 1씩 증가한다.
그리고 1 이상의 정수로 이뤄진 N항 수열 B0, B1,... BN-1이 주어졌을 때  몇 번인가 버튼을 눌러서 모든 i에 대해 Ai가 Bi의 배수가 되도록 만들려고 한다.
버튼을 누르는 최소 횟수를 구하라.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // 입력
  int N;
  cin >> N;
  vector<long long> A(N), B(N);
  for (int i = 0; i < N; ++i)
    cin >> A[i] >> B[i];

  // 답
  long long sum = 0;
  for (int i = N - 1; i >= 0; --i)
  {
    A[i] += sum; // 이전까지의 작업 횟수를 더함
    long long remainder = A[i] % B[i];
    long long D = 0;
    if (remainder != 0)
      D = B[i] - remainder;
    sum += D;
  }
  cout << sum << endl;
}