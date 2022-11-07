#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//두 점 (x1, y1)과 (x2, y2) 사이 거리를 구하는 함수
double calc_dist(double x1, double y1, double x2, double y2)
{
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
  //데이터를 입력받음
  int N;
  cin >> N;
  vector<double> x(N), y(N);
  // vector란 무엇인가?? -> vector 컨테이너는 자동으로 메모리가 할당되는 배열.
  for (int i = 0; i < N; ++i)
  {
    cin >> x[i] >> y[i];
  }
  // 결과 값이 들어갈 변수를 초기화(결과 값 후보보다 훨씬 큰 값)
  double minimum_dist = 10000000.0;

  //탐색 시작
  for (int i = 0; i < N; ++i)
  {
    for (int j = i + 1; j < N; ++j)
    {
      //(x[i], y[i])와 (x[j], y[j]) 사이 거리
      double dist_i_j = calc_dist(x[i], y[i], x[j], y[j]);

      //잠정 최솟값 minimum_dist를 dist_i_j와 비교
      if (dist_i_j < minimum_dist)
      {
        minimum_dist = dist_i_j;
      }
    }
    /*
    2중 for문에서 j는 i + 1인 이유는.
    - i = 2, j = 5일 때: (x2,y2)와 (x5,y5)사이의 거리
    - i = 5, j = 2일 때: (x5,y5)와 (x2,y2)사이의 거리
    처럼 중복이 있기 때문이다. 그래서 i < j 를 만족하는 범위만 조사하면 충분하다.
    */
  }
  // 결과 출력
  cout << "가장 최소 거리는: " << minimum_dist << endl;
}
/*
복잡도 구하기!
- i = 0일 때 N-1회 (j=1,2,...N-1)
- i = 1일 때 N-2회 (j=2,...N-1)
...
- i = N-2일 때 1회 (j=N-1)
- i = N-1일 때 0회
T(N) = (N-1) + (N-2) + ... + 1 + 0 = N/2(N-1)
복잡도: O(N²).
*/