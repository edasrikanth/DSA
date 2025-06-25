#ifndef Stack_H // Include guard to prevent multiple inclusions
#define Stack_H

struct Node{
    Node* lChild;
    int data;
    Node* rChild;
};

class BinaryTree
{
    private:
    Node* root;

    public:
    BinaryTree();
    void CreateBinaryTree();
    Node* getRoot();
    void preOrderTraversal(Node* node);
    void deleteSubTree(Node* node);

    ~BinaryTree();

};


#endif