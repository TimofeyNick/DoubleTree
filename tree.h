#ifndef TREE_H
#define TREE_H

#include "node.h"

class Tree: public Node{
public:

    Node root_;

    Tree();
    ~Tree();

    Node find_node(float data); // возвращает именно Node,а не Node*

    void print_tree(Node* node){
        if (node -> key_ == -1){return;}
        //print_tree(*(node.left_));
        std::cout << node -> key_ << "  ";
        print_tree(node->right_);
    }

    void insert(float data);

};


#endif // TREE_H
