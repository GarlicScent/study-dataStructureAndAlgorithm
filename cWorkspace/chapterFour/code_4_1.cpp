#include <iostream>
using namespace std;

int func(int N)
{
  if (N == 0)
    return 0;
  return N + func(N - 1);
}
// 재귀함수 작성해보기!

int main()
{
  cout << "This is " << func(3) << endl;
}