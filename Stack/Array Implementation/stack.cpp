#include "stack.h"
#include <iostream>
#include <stdlib.h>
#define MAX 100

using namespace std;

template <typename T>

Stack<T>::Stack()
{
  cout << "Constructor Called\n";
}

template <typename T>

void Stack<T>::initStack()
{
  this->array = (T *)calloc(sizeof(T), MAX);
  this->top = 0;
}

template <typename T>

bool Stack<T>::isStackEmpty()
{
  return this->top == 0;
}

template <typename T>

bool Stack<T>::isStackFull()
{
  return this->top == MAX;
}

template <typename T>

void Stack<T>::push(T data)
{
  this->array[this->top] = data;
  this->top++;
}

template <typename T>

T Stack<T>::pop()
{
  top--;
  return this->array[this->top];
}

template <typename T>

Stack<T>::~Stack()
{
  cout << "Destructor Called\n";
}
