/*Atcoder Beginner Contest 023 D - 사격왕

N개의 풍선이 초기 상태에는 각각 H(i) 위치에 있고 1초마다 S(i)만큼 상승한다고 하자. 그리고 모든 풍선을 쏘아서 터트리려고 한다. 단, H(i)나 S(i)는 양의 정수다.
경기 시작과 동시에 풍선 하나를 터트릴 수 있고 그 후 1초마다 풍선을 하나씩 터트릴 수 있다. 최종적으로 모든 풍선을 터트리는데, 어떤 풍선부터 쏠지 순서를 정하는 것은 자유다.
풍선이 터질 때 발생하는 페널티는 그 풍선의 현재 높이로, 최종적인 페널티는 각 풍선을 터트렸을 때 발생한 페널티 중 최대인 값이다. 최종 페널티가 가장 작은 값을 구하라.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  // 입력
  int N;
  // N은 풍선의 개수이자 전체 풍선을 터트리는 시간이다.
  cin >> N;
  vector<long long> H(N), S(N);
  for (int i = 0; i < N; ++i)
    cin >> H[i] >> S[i];

  // 이진 탐색 상한값을 구함
  long long M = 0;
  for (int i = 0; i < N; ++i)
    M = max(M, H[i] + S[i] * N);
  // H[i] + S[i] * N 은 i번째 풍선을 맨 마지막에 터트렸을 때의 최대 높이.

  // 이진 탐색
  long long left = 0, right = M;
  while (right - left > 1)
  {
    long long mid = (left + right) / 2;

    // 판정
    bool ok = true;
    vector<long long> t(N, 0); // 각 풍선이 터질 때까지의 제한 시간
    for (int i = 0; i < N; ++i)
    {
      // mid가 초기 높이보다 낮으면 false
      if (mid < H[i])
        ok = false;
      else
        t[i] = (mid - H[i]) / S[i];
    }
    // 제한 시간이 얼마 남지 않은 순서로 정렬
    sort(t.begin(), t.end());
    for (int i = 0; i < N; ++i)
    {
      // 제한 시간 초과가 발생하면 false
      if (t[i] < i)
        ok = false;
    }

    if (ok)
      right = mid;
    else
      left = mid;
  }

  cout << right << endl;
}