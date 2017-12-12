//
// Created by vladimir on 12.12.17.
//
#include <iostream>
#include "node.hpp"

template <class T>
Node<T>::Node() {
  data_ = T(0);
  left_ = nullptr;
  right_ = nullptr;
}

template <class T>
Node<T>::Node(T data) {
  data_ = data;
  left_ = nullptr;
  right_ = nullptr;
}


template <class T>
std::ostream& operator<<(std::ostream &os,const Node<T> & node){
  os << node.data_;
  return os;
}
