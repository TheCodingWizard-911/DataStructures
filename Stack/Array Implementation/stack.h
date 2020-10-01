#ifndef STACK_H
#define STACK_H

template <typename T>

class Stack
{
private:
  T *array;
  int top;

public:
  Stack();
  void initStack();
  bool isStackEmpty();
  bool isStackFull();
  void push(T data);
  T pop();
  ~Stack();
};

#endif // STACK_H
