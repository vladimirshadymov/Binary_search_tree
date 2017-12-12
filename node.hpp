//
// Created by vladimir on 12.12.17.
//

#ifndef PROJECT_NODE_HPP
#define PROJECT_NODE_HPP


#include <iostream>
template <class T>
class Node{
 public:
  T data_;
  Node<T>* left_;
  Node<T>* right_;
  Node();
  explicit Node(T data);
  ~Node()= default;

};

template <class T>
std::ostream& operator<<(std::ostream &os, const Node<T> &node);

#endif //PROJECT_NODE_HPP
