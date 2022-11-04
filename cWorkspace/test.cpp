#include <iostream>
#include <string>

int main()
{
  int age;

  std::cout << "나이를 입력하세요.\n";
  std::cin >> age;
  std::cout << "나이가 " + std::to_string(age) + "이군요.";
}