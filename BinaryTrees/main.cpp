#include "BinaryTree.h"
#include<iostream>


int main()
{
    BinaryTree BTree;
    BTree.CreateBinaryTree();
    BTree.preOrderTraversal(BTree.getRoot());

    return 0;
}