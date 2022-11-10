#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // 입력
  int N, v;
  cin >> N >> v;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
    cin >> a[i];

  //선형 탐색
  int found_id = -1;

  for (int i = 0; i < N; ++i)
  {
    if (a[i] == v)
    {
      found_id = i;
      break;
    }
  }

  cout << "찾았습니다!:" << found_id << endl;
}