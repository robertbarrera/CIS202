#include "tree.h"
#include <iostream>

Tree::Tree()
{
   root = nullptr;
}

Tree::Tree(std::string root_data)
{
   root = new Node;
   root->data = root_data;
}

void Tree::add_subtree(const Tree& subtree)
{
   root->children.push_back(subtree.root);
}

int Tree::size() const
{
   if (root == nullptr) { return 0; }
   else { return root->size(); }
}

int Node::size() const
{
   int sum = 0;
   for (Node* child : children)
   {
      sum = sum + child->size();
   }
   return 1 + sum;
}

// begin recursive print at root node for tree/subtree
void Tree::print() const{
    if (root != nullptr){
        root->print(); //print if root node has children nodes
    }
}

// will recursively print in depth-first preorder
void Node::print() const{
    std::cout << data << std::endl;
    for (Node* np: children){ // traverse down tree/subtree, print all children node data
        np->print();
    }
}