//유클리드 호제법 최대공약수 예제 코드
#include <iostream>
using namespace std;

int GCD(int m, int n)
{
  //베이스 케이스
  if (n == 0)
    return m;

  //재귀 호출
  return GCD(n, m % n);
}

int main()
{
  cout << GCD(51, 15) << endl;
  cout << GCD(15, 51) << endl;
  //아하~ 숫자가 바뀌어도 어차피 큰수로 작은수가 나뉘어지면 m, n 위치가 바뀌어지게 되는구나.
}