//피보나치 수열을 구하는 재귀 함수를 재귀 호출하는 모습!
#include <iostream>
using namespace std;

int fibo(int N)
{
  cout << "fibo(" << N << ") 호출" << endl;

  //베이스 케이스
  if (N == 0)
    return 0;
  else if (N == 1)
    return 1;

  int result = fibo(N - 1) + fibo(N - 2);
  cout << N << " 번째 = " << result << endl;

  return result;
}

int main()
{
  fibo(2);
}