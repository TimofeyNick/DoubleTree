#include <iostream>

#include "node.h"
#include "tree.h"

using namespace std;

int main()
{
    Tree tree;
    Node p = tree.find_node(5);
    cout << "p.key_ = " << p.key_ << endl;
    cout << "p.parent_ = " << p.parent_ << endl;
    cout << "p.right_ = " << p.right_ << endl;
    cout << "p.left_ = " << p.left_ << endl;
    tree.print_tree(&(tree.root_));
    tree.insert(5);
    Node f = tree.root_;
    cout << "-------------------------" << endl;
    cout << "f.key_ = " << f.key_ << endl;
    cout << "f.parent_ = " << f.parent_ << endl;
    cout << "f.right_ = " << f.right_ << endl;
    cout << "f.left_ = " << f.left_ << endl;
    //tree.print_tree(&(tree.root_));
    Node k = tree.find_node(5);
    cout << "-------------------------" << endl;
    cout << "k.key_ = " << k.key_ << endl;
    // добавляю тесты, которые не работают
    // после попытки запуска одно из них прога ложиться
    Node l = tree.find_node(8);
    tree.insert(9);
    tree.insert(7);
    return 0;
}
