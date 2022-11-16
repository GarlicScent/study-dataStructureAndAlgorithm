#include <iostream>
using namespace std;

int func(int N)
{
  //재귀 함수를 호출한다고 출력
  cout << "func(" << N << ") 호출함" << endl;

  if (N == 0)
    return 0;
  int result = N + func(N - 1);
  cout << N << "까지의 합 = " << result << endl;

  return result;
}

int main()
{
  func(5);
}

/*
재귀 함수 템플릿.
(반환값형) func(인수){
  if(베이스 케이스){
    return 베이스 케이스에 대응하는 값;
  }

  //재귀 호출
  func(다음 인수);
  return 응답;
}
*/
/*
- 베이스 케이스 처리를 제대로 하지 않으면 무한 반복이 된다.
- 재귀 호출을 할 때 인수가 베이스 케이스에 점점 가까워지는지 여부.
*/
