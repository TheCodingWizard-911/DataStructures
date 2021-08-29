#ifndef STACK_H
#define STACK_H

template <typename T>

class Stack
{
private:
  typedef struct node
  {
    T data;
    struct node *previous, *next;
  } node;
  node *top;

public:
  Stack();
  void initStack();
  bool isStackEmpty();
  bool isStackFull();
  node *createNewnode(T data);
  void push(T data);
  T pop();
  ~Stack();
};

#endif // STACK_H