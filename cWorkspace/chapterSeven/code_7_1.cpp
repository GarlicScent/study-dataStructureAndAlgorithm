/*
동전 문제
500원, 100원, 50원, 10원짜리 동전이 각각 a0, a1, a2, a3 개 있다고 하자.
이 동전으로 X원을 지불할 때 동전을 가능한 한 적게 사용하고 싶다.
최소 몇 개의 동전을 사용해야 하는지 구하라.
단, 해당 금액을 만드는 방법은 반드시 하나 이상 존재한다고 가정한다.
*/
#include <iostream>
#include <vector>
using namespace std;

// 동전 금액
const vector<int> value = {500, 100, 50, 10};

int main()
{
  // 입력
  int X;
  vector<int> a(4);
  cin >> X;
  for (int i = 0; i < 4; ++i)
    cin >> a[i];

  // 탐욕법
  int result = 0;
  for (int i = 0; i < 4; ++i)
  {
    // 개수 제한이 없는 경우 최대 개수
    int add = X / value[i];

    // 개수 제한을 고려
    if (add > a[i])
      add = a[i];
    // 남은 금액을 계산하고 답에 사용한 동전 개수를 더하기
    X -= value[i] * add;
    result += add;
  }

  cout << result << endl;
}