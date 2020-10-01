#include "queue.cpp"
#include <iostream>

using namespace std;

int main()
{

  Queue<int> q;

  q.initQueue();

  while (!q.isQueueFull())
  {
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);
    break;
  }
  while (!q.isQueueEmpty())
  {
    cout << q.dequeue() << '\n';
  }

  return 0;
}