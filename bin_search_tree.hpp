//
// Created by vladimir on 12.12.17.
//

#ifndef PROJECT_BIN_SEARCH_TREE_HPP
#define PROJECT_BIN_SEARCH_TREE_HPP

#include <iostream>
#include "node.hpp"
#include <vector>

template <class T>
class BinSearchTree{
 private:
  Node<T>* head_;
  void destroy(Node<T>*&node_ptr);
 public:
  BinSearchTree();
  ~BinSearchTree();
  void destroyTree();

  Node<T>* getHead();


  /*!
   * Проверка на наличие элемента в дереве.
   */
  bool checkElem(T data);


  /*!
   * Возвращает указатель на звено дерева,
   * с искомым содержанием data, если такого элемента нет возвращает nullptr
   */
  Node<T>* findElem(T data);

  void pushElem(T data);

  /*!
   * @param sub_head вершина поддерева, которое нужно записать в вектор
   * @param
   */
  void getSubTreeAsVector(Node<T>* sub_head, std::vector<T> &v);

};

template <class T>
std::ostream& operator<<(std::ostream& os, BinSearchTree<T> & tree);


#endif //PROJECT_BIN_SEARCH_TREE_HPP
