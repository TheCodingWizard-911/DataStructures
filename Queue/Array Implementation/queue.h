#ifndef QUEUE_H
#define QUEUE_H

template <typename T>

class QUEUE
{
private:
  T *array;
  int top;

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
