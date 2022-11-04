#include <iostream>
using namespace std;

int main()
{
  int N;
  cout << "숫자를 입력하세요.";
  cin >> N;

  int count = 0;
  for (int i = 0; i < N; ++i)
  {
    ++count;
    cout << count;
    cout << "\n";
  }
}
/*
추가 설명 기입 예정
*/