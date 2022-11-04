#include <iostream>
using namespace std;

int main()
{
  int N;
  cout << "숫자를 입력하세요";
  cin >> N;

  int count = 0;
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      ++count;
      cout << count;
    }
  }
}
/*
복잡도: O(N²)

i = 0,1,..., N-1로 들어가져서 총 N개가 된다.
j = 0,1,..., N-1로 들어가져서 총 N개가 된다.

그래서 ++count가 N² 발생.
*/