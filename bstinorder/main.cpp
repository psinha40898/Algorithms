#include<iostream>
using namespace std;
/*
Pyush Sinha
CS 413
Dr. Derakhshandeh
In Order Traversal of a BST

Every BST contains a node and a pointer to a node. Every node contains a pointer to a left node, and a right node.
*/

class BST {
private:
struct node
{
   int data;
   node* left;
   node* right;
};
  
  node* root;

node* empty(node* tree) 
{
   if(tree != NULL)
   {
    empty(tree->left);
    empty(tree->right);
    delete tree;
   }
   return NULL;
}

node* insert(int data, node* tree)
{
   if(tree == NULL)
   {
    tree = new node;
    tree->data = data;
    tree->left = tree->right = NULL;
   }
   else if(data <= tree->data)
   {
    tree->left = insert(data, tree->left);
   }
   else if(data >= tree->data)
   {
    tree->right = insert(data, tree->right);
   }
  return tree;
}
    /*
    In Order Traversal 
    L N R 
    Left, Node, Right traversal 
    */
void InOrderTreeTraversal(node *tree)
{
   if (tree == NULL)
   {
    return;
   }
  InOrderTreeTraversal(tree->left);
  cout<<tree->data << " "; // visitation of current node
  InOrderTreeTraversal(tree->right);
}



public:
BST()
{
   root = NULL;
}
    
BST(int *arr, int size)
{
   root = NULL;
   for (int i =0; i< size; i++)
   {
    this->insert(arr[i]);
   }
}

~BST()
{
   root = empty(root);
}

void insert(int data)
{
   root = insert(data, root);
}
    
void printInOrder()
{
   InOrderTreeTraversal(root);
   cout<<endl;
}

//End of class
};

int main() {
    BST tree;
    int data[] = {6,2,8,7,1,4,3,5,9};
    BST tree2 = BST(data, 9);
    tree.insert(6);
    tree.insert(2);
    tree.insert(8);
    tree.insert(7);
    tree.insert(1);
    tree.insert(4);
    tree.insert(3);
    tree.insert(5);
    tree.insert(9);
    tree.printInOrder();
    //tree2.printInOrder();
    //tree2.insert(99);
    //tree2.printInOrder();
 
  
    return 0; 
}



