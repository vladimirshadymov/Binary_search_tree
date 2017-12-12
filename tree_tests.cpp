//
// Created by vladimir on 12.12.17.
//

#include <gtest/gtest.h>
#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
#include "node.cpp"
#include "bin_search_tree.cpp"


// Создание вектора
TEST(Node, Creation){
  int tmp = 5;
  Node<int> nd(tmp);
  ASSERT_EQ(5, nd.data_);
  double t = 5.6;
  Node<double> nd2(t);
  ASSERT_DOUBLE_EQ(5.6, nd2.data_);
}

TEST(Node, Output){
  Node<double> node1(1.1);

  std::ostringstream out;

  out << std::setprecision(2) << node1;

  ASSERT_EQ(out.str(), "1.1");

  Node<std::string> node2(std::string("I want otl 10"));

  out.str("");
  out << node1 << " | " << node2;

  ASSERT_EQ(out.str(), "1.1 | I want otl 10");
}


TEST(BinSearchTree, Creation){
  BinSearchTree<int> bin_tree_1;
  ASSERT_EQ(bin_tree_1.getHead(), nullptr);
  bin_tree_1.pushElem(4);
  Node<int>* bin_tree_1_head = bin_tree_1.getHead();
  ASSERT_EQ(bin_tree_1_head->data_, 4);
}

TEST(BinSearchTree, ElemDistribution){
  BinSearchTree<int> bin_tree_1;
  ASSERT_EQ(bin_tree_1.getHead(), nullptr);
  bin_tree_1.pushElem(4);
  bin_tree_1.pushElem(6);
  bin_tree_1.pushElem(12);
  bin_tree_1.pushElem(10);
  bin_tree_1.pushElem(1);
  bin_tree_1.pushElem(2);
  ASSERT_TRUE(bin_tree_1.checkElem(1));
  ASSERT_TRUE(bin_tree_1.checkElem(2));
  ASSERT_TRUE(bin_tree_1.checkElem(4));
  ASSERT_TRUE(bin_tree_1.checkElem(6));
  ASSERT_TRUE(bin_tree_1.checkElem(12));
  ASSERT_TRUE(bin_tree_1.checkElem(10));
  ASSERT_FALSE(bin_tree_1.checkElem(5));
  ASSERT_FALSE(bin_tree_1.checkElem(7));
  ASSERT_FALSE(bin_tree_1.checkElem(11));
}

TEST(BinSearchTree, Output)
{
  BinSearchTree<int> bin_tree_1;
  ASSERT_EQ(bin_tree_1.getHead(), nullptr);
  bin_tree_1.pushElem(4);
  bin_tree_1.pushElem(6);
  bin_tree_1.pushElem(12);
  bin_tree_1.pushElem(10);
  bin_tree_1.pushElem(1);
  bin_tree_1.pushElem(2);

  std::ostringstream out;

  out << std::setprecision(2) << bin_tree_1;


  ASSERT_EQ(out.str(), "1, 2, 4, 6, 10, 12, ");
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);

  int tmp = 5;
  Node<int> nd(tmp);
  std::cout << nd;

  return RUN_ALL_TESTS();
}