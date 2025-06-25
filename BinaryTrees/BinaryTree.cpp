#include "BinaryTree.h"
#include <iostream>
#include<queue>


BinaryTree::BinaryTree()
{
    root = nullptr;
}

Node* BinaryTree::getRoot()
{
    return root;
}

void BinaryTree::CreateBinaryTree()
{
    std::cout<<"enter data in root node"<<std::endl;

    int val;
    std::cin>>val;
    if(val != -1)
    {
       root = new Node;
       root->data = val;
       root->lChild = root->rChild = nullptr;
    }
    std::queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* ptr = q.front();
        q.pop();
        std::cout<<"enter the left child of "<<ptr->data<<std::endl;
        int x;
        std::cin>>x;

        if(x != -1)
        {
            Node* child = new Node;
            child->data = x;
            child->lChild = child->rChild = nullptr;
            ptr->lChild = child;
            q.push(child);
        }

        std::cout<<"enter the right child of "<<ptr->data<<std::endl;
        int y;
        std::cin>>y;

        if(y != -1)
        {
            Node* child = new Node;
            child->data = y;
            child->lChild = child->rChild = nullptr;
            ptr->rChild = child;
            q.push(child);
        }

    }

}

void BinaryTree::preOrderTraversal(Node* node)
{
    if(node != nullptr)
    {
        std::cout<<node->data<< " ";

        preOrderTraversal(node->lChild);
        preOrderTraversal(node->rChild);
    }
}

BinaryTree::~BinaryTree()
{
    deleteSubTree(root);
}

void BinaryTree::deleteSubTree(Node* node)
{
    if (node == nullptr)
        return;

    deleteSubTree(node->lChild);  // Delete left subtree
    deleteSubTree(node->rChild);  // Delete right subtree
    delete node;                  // Delete current node
}

