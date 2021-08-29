#include <iostream>
#include "tree.cpp"

using namespace std;

int main()
{
  Tree<int> t;

  t.initTree();

  t.insertNode(50);
  t.insertNode(60);
  t.insertNode(40);
  t.insertNode(70);
  t.insertNode(30);
  t.insertNode(20);
  t.insertNode(80);
  t.insertNode(10);

  cout << "Inorder\n";
  t.inorderTraversal(t.getRoot());
  cout << "\nPreorder\n";
  t.preorderTraversal(t.getRoot());
  cout << "\nPostorder\n";
  t.postorderTraversal(t.getRoot());

  return 0;
}