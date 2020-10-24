#ifndef QUEUE_H
#define QUEUE_H

template <typename T>

class Queue
{
private:
  typedef struct node
  {
    T data;
    struct node *next;
  } node;
  node *front, *rear;

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
