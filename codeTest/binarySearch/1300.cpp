#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, k;
  cin >> N >> k;
  vector<vector<int>> A(N, vector<int>(N, 0));

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      A[i][j] = i * j;
    }
  }

  vector<int> B(N);

  for (int i = 1; i < N; i++)
  {
    for (int j = 1; j < N; j++)
    {
      B.push_back(i * j);
    }
  }

  cout << B[k];
}