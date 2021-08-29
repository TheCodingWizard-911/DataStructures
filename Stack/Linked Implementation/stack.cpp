#include "stack.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

template <typename T>
Stack<T>::Stack()
{
  cout << "Constructor Called\n";
}

template <typename T>
void Stack<T>::initStack()
{
  this->top = nullptr;
}

template <typename T>
bool Stack<T>::isStackEmpty()
{
  return this->top == nullptr;
}

template <typename T>
bool Stack<T>::isStackFull()
{
  node *newnode = (node *)malloc(sizeof(node));
  return newnode ? false : true;
}

template <typename T>
Stack<T>::node *Stack<T>::createNewnode(T data)
{
  node *newnode = (node *)malloc(sizeof(node));
  newnode->previous = nullptr;
  newnode->next = nullptr;
  newnode->data = data;

  return newnode;
}

template <typename T>
void Stack<T>::push(T data)
{
  node *newnode = createNewnode(data);

  if (this->isStackEmpty())
  {
    this->top = newnode;
  }
  else
  {
    this->top->next = newnode;
    newnode->previous = this->top;
    this->top = this->top->next;
  }
}

template <typename T>
T Stack<T>::pop()
{
  node *temp = this->top;
  T answer = temp->data;
  this->top = temp->previous;
  if (temp->previous)
  {
    temp->previous = nullptr;
    free(temp);
    return answer;
  }
  else
  {
    free(temp);
    return answer;
  }
}

template <typename T>
Stack<T>::~Stack()
{
  cout << "Destructor Called\n";
}
