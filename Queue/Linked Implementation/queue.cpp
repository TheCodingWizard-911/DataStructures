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
  this->front = nullptr;
  this->rear = nullptr;
}

template <typename T>

bool Queue<T>::isQueueEmpty()
{
  return this->front == nullptr;
}

template <typename T>

bool Queue<T>::isQueueFull()
{
  node *newnode = (node *)malloc(sizeof(node));
  return newnode ? false : true;
}

template <typename T>

void Queue<T>::enqueue(T data)
{

  node *newnode = (node *)malloc(sizeof(node));
  newnode->data = data;
  newnode->next = nullptr;

  if (this->isQueueEmpty())
  {

    this->front = newnode;
    this->rear = newnode;
  }

  else
  {
    this->rear->next = newnode;
    this->rear = this->rear->next;
  }
}

template <typename T>

T Queue<T>::dequeue()
{

  T data = this->front->data;

  node *temp = this->front;
  this->front = this->front->next;

  free(temp);

  return data;
}

template <typename T>

Queue<T>::~Queue()
{
  cout << "Destructor Called\n";
}
