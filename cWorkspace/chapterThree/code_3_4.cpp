#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000; // 충분히 큰 값.

int main()
{
  // input
  int N, K;
  cin >> N >> K;
  vector<int> a(N), b(N);
  for (int i = 0; i < N; ++i)
    cin >> a[i];
  for (int i = 0; i < N; ++i)
    cin >> b[i];

  // linear search
  int min_value = INF;
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      if (a[i] + b[j] < K)
        continue;

      if (a[i] + b[j] < min_value)
      {
        min_value = a[i] + b[j];
      }
    }
  }

  cout << "min_value: " << min_value << endl;
}