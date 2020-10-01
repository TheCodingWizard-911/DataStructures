#ifndef QUEUE_H
#define QUEUE_H

template <typename T>

class Queue
{
private:
  T *array;
  int front, rear, count;

public:
  Queue();
  void initQueue();
  bool isQueueEmpty();
  bool isQueueFull();
  void enqueue(T data);
  T dequeue();
  ~Queue();
};

#endif // QUEUE_H
