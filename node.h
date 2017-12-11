#ifndef NODE_H
#define NODE_H

class Node{
public:

    float key_;

    Node();
    ~Node();

    Node *parent_, *left_, *right_;

    void update_key(float data){
        key_ = data;
    }

    Node operator=(const Node* p){
        this->key_ = (*p).key_;
        this->parent_ = (*p).parent_;
        this->right_ = (*p).right_;
        this->left_ = (*p).left_;
        return *this;
    }

//    Node operator=(const Node p){
//        this->key_ = p.key_;
//        this->parent_ = p.parent_;
//        this->right_ = p.right_;
//        this->left_ = p.left_;
//        return *this;
//    }
};

#endif // NODE_H
