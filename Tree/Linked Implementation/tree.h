#ifndef TREE_H
#define TREE_H

template <typename T>

class Tree
{
private:
  typedef struct node
  {
    T data;
    struct node *left, *right;
  } node;
  node *root;

public:
  Tree();
  void initTree();
  node *getRoot();
  node *createNewnode(T data);
  void insertNode(T data);
  node *searchNode(T data);
  void deleteNode(T data);
  void inorderTraversal(node *root);
  void preorderTraversal(node *root);
  void postorderTraversal(node *root);
  void levelwiseTraversal(node *root);
  ~Tree();
};

#endif // TREE_H