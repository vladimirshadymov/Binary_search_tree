//
// Created by vladimir on 12.12.17.
//

#include "node.hpp"
#include "bin_search_tree.hpp"
#include <queue>

template <class T>
BinSearchTree<T>::BinSearchTree() {
  head_ = nullptr;
}

template <class T>
void BinSearchTree<T>::destroy(Node<T>*&node_ptr) {
  if (node_ptr == nullptr) return;
  else{
    destroy(node_ptr->left_);
    destroy(node_ptr->right_);
    if (node_ptr->left_== nullptr and node_ptr->right_== nullptr) {
      delete node_ptr;
      node_ptr = nullptr;
    }
  }

}

template <class T>
BinSearchTree<T>::~BinSearchTree() {
  destroy(head_);
}

template <class T>
void BinSearchTree<T>::destroyTree() {
  destroy(head_);
}


template <class T>
Node<T>* BinSearchTree<T>::getHead()const {
  return head_;
}

template <class T>
bool BinSearchTree<T>::checkElem(T data) {
  Node<T>* iterator = head_;

  while (iterator!=nullptr and iterator->data_!=data){
    if (data<iterator->data_) iterator = iterator->left_;
    else if (data>iterator->data_) iterator = iterator->right_;
  }

  return (iterator!=nullptr);
}

template <class T>
Node<T>* BinSearchTree<T>::findElem(T data) {
  Node<T>* iterator = head_;

  while (iterator!=nullptr and iterator->data_!=data){
    if (data<iterator->data_) iterator = iterator->left_;
    else if (data>iterator->data_) iterator = iterator->right_;
  }

  return iterator;
}


template <class T>
void BinSearchTree<T>::pushElem(T data) {
  Node<T>* it_curr = head_;
  Node<T>* it_prev = head_;

  if (head_== nullptr) {
    head_ = new Node<T>(data);
    return;
  }

  while (it_curr!= nullptr){
    if (it_curr->data_>data){
      it_prev = it_curr;
      it_curr = it_curr->left_;
    } else {
      it_prev = it_curr;
      it_curr = it_curr->right_;
    }
  }

  if (it_prev->data_>data) {
    it_prev->left_ = new Node<T>(data);
  } else {
    it_prev->right_ = new Node<T>(data);
  }
}

template <class T>
void BinSearchTree<T>::getSubTreeAsVector(Node<T> *sub_head, std::vector<T> &v) {
  if (sub_head==nullptr) return;
  else {
    getSubTreeAsVector(sub_head->left_, v);
    v.push_back(sub_head->data_);
    getSubTreeAsVector(sub_head->right_, v);
  }
}

template <class T>
std::ostream& operator<<(std::ostream& os,BinSearchTree<T> & tree) {
  Node<T>* it = tree.getHead();
  std::vector<T> output_vector = {};
  tree.getSubTreeAsVector(it, output_vector);
  for (auto& item : output_vector){
    os << item << ", ";
  }
  return os;
}

template<class T>
BinSearchTree<T>& BinSearchTree<T>::operator=(const BinSearchTree<T> &tree) {
  std::queue<Node<T>*> queue_of_nodes;
  Node<T>* tmp_node_iterator;
  queue_of_nodes.push(tree.getHead());
  while (!queue_of_nodes.empty()) {
    tmp_node_iterator = queue_of_nodes.front();
    this->pushElem(tmp_node_iterator->data_);
    queue_of_nodes.pop();
    if (tmp_node_iterator->left_!= nullptr) queue_of_nodes.push(tmp_node_iterator->left_);
    if (tmp_node_iterator->right_!= nullptr) queue_of_nodes.push(tmp_node_iterator->right_);
  }
}