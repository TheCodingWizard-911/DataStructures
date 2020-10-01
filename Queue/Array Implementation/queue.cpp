#include "queue.h"
#include <stdlib.h>
#include <iostream>

#define MAX 100

using namespace std;

template <typename T>

Queue<T>::Queue()
{
  cout << "Constructor Called\n";
}

template <typename T>

void Queue<T>::initQueue()
{
  this->array = (T *)calloc(sizeof(T), MAX);
  this->front = 0;
  this->rear = this->front - 1;
  this->count = 0;
}

template <typename T>

bool Queue<T>::isQueueEmpty()
{
  return this->count == 0;
}

template <typename T>

bool Queue<T>::isQueueFull()
{
  return this->count == (MAX - 1);
}

template <typename T>

void Queue<T>::enqueue(T data)
{

  this->rear = (this->rear + 1) % MAX;
  this->array[this->rear] = data;

  this->count++;
}

template <typename T>

T Queue<T>::dequeue()
{

  T data = this->array[this->front];
  this->front = (this->front + 1) % MAX;

  this->count--;

  return data;
}

template <typename T>

Queue<T>::~Queue()
{
  cout << "Destructor Called\n";
}
