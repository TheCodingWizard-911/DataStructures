#include "tree.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

template <typename T>
Tree<T>::Tree()
{
  cout << "Constructor Called\n";
}

template <typename T>
void Tree<T>::initTree()
{
  this->root = nullptr;
}

template <typename T>
typename Tree<T>::node *Tree<T>::getRoot()
{
  return this->root;
}

template <typename T>
typename Tree<T>::node *Tree<T>::createNewnode(T data)
{
  node *newnode = (node *)malloc(sizeof(node));
  newnode->left = nullptr;
  newnode->right = nullptr;
  newnode->data = data;

  return newnode;
}

template <typename T>
void Tree<T>::insertNode(T data)
{
  node *newnode = createNewnode(data);

  node *currentNode, *previousNode;

  if (this->root == nullptr)
  {
    this->root = newnode;
  }
  else
  {
    int left = 0, right = 0;

    currentNode = this->root;
    previousNode = nullptr;

    while (currentNode)
    {
      if (data > currentNode->data)
      {
        previousNode = currentNode;
        currentNode = currentNode->right;
        if (currentNode == nullptr)
        {
          previousNode->right = newnode;
        }
      }

      else if (data < currentNode->data)
      {
        previousNode = currentNode;
        currentNode = currentNode->left;
        if (currentNode == nullptr)
        {
          previousNode->left = newnode;
        }
      }
    }
  }
}

template <typename T>
typename Tree<T>::node *Tree<T>::searchNode(T data)
{
  if (this->root == nullptr)
  {
    return nullptr;
  }

  node *currentNode = this->root;

  while (currentNode)
  {
    if (data == currentNode->data)
    {
      return currentNode;
    }
    else if (data > currentNode->data)
    {
      currentNode = currentNode->right;
    }
    else if (data < currentNode->data)
    {
      currentNode = currentNode->left;
    }
  }

  return nullptr;
}

template <typename T>
void Tree<T>::inorderTraversal(node *root)
{
  if (root)
  {
    inorderTraversal(root->left);
    cout << root->data << "\t";
    inorderTraversal(root->right);
  }
}

template <typename T>
void Tree<T>::preorderTraversal(node *root)
{
  if (root)
  {
    cout << root->data << "\t";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
  }
}

template <typename T>
void Tree<T>::postorderTraversal(node *root)
{
  if (root)
  {
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << "\t";
  }
}

template <typename T>
Tree<T>::~Tree()
{
  cout << "\nDestructor Called\n";
}