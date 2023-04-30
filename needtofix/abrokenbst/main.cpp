#include<iostream>
using namespace std;

class BST {
    
    struct node {
        int data;
        node* left;
        node* right;
    };

    node* root;
    
    node* setEmpty(node* tree)
    {
        if (tree == NULL)
        {
            return NULL;
        }
        
        {
            setEmpty(tree->left);
            setEmpty(tree->right);
            delete tree;
        }
        return NULL;
    }

    node* setNew(int data)
    {
        node* newNode = new node();
        newNode->data = data;
        newNode->left = newNode->right = NULL;
        return newNode;
        
    }
    
    void insert (node* tree, int data)
    {
        if (tree == NULL)
        {
            tree = setNew(data);
            tree->data = data;
            tree->left = tree->right = NULL;
        }
        
        else if (data < tree->data)
        {
            tree->left = insert(tree->left, data);
        }
        else if ( data > tree->data)
        {
            tree->data = insert(tree->left, data);
        }

    }
public:
    BST() {
        root = NULL;
    }

    ~BST() {
        root = makeEmpty(root);
    }
    
    void insert(int data)
    {
        root = insert(data, root);
    }

 
};

int main() {
  BST test;
  
  test.insert(20);
    return 0; 
}
