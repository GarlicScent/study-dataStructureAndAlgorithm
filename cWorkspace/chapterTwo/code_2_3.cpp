#include <iostream>
using namespace std;

int main()
{
  int N;
  cout << "write a number  ";
  cin >> N;
  // cin >> N; 에서는 >>: 추출 연산자를 사용한다.

  for (int i = 2; i <= N; i += 2)
  {
    cout << i << endl;
    // << : 삽입 연산자, endl;은 개행을 의미한다. '\n'과 같다. endline 같은데?
  }
}
// for 문의 반복 횟수는 N/2회. 복잡도: O(N).