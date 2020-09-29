#include <iostream>
#include "stack.cpp"

using namespace std;

int main()
{
  Stack<int> s;

  s.initStack();

  while (!s.isStackFull())
  {
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    break;
  }
  while (!s.isStackEmpty())
  {
    cout << s.pop() << '\n';
  }

  return 0;
}
