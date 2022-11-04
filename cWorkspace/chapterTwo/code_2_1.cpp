#include <iostream>
using namespace std;

int main()
{
  int N;
  cout << "숫자를 입력하세요.";
  cin >> N;

  int count = 0;
  for (int i = 0; i < N; ++i)
  {
    ++count;
    cout << count;
    cout << "\n";
  }
}
/*
복잡도: O(N)
i = 0,1,..., N-1로 들어가져서 총 N개가 된다.

++count가 N번 일어나서 최종적으로 count=N.

그 외
- i = 0 초기화: 1회
- i < N 판정: N + 1회 (마지막 i = N일 때도 판정)
- ++i: N회

총 3N + 2.
lim (3N + 2) / N = 3.
N➡️ ∞
N이 커질수록 극한처럼 +2는 무시해도 된다.
*/