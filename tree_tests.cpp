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
TEST(Node, Creation)
{

  //int tmp = 5;
  //Node<int> nd(tmp);
  //ASSERT_EQ(5, nd.data_);
  ASSERT_FALSE(false);
}

/*!
// Сложение двух векторов
TEST(Vector3d, Add)
{
  vector3d v1 = {1, 2, 3};
  vector3d v2 = {3, 2, 1};

  vector3d v = v1 + v2;

  ASSERT_DOUBLE_EQ(v.x, 4);
  ASSERT_DOUBLE_EQ(v.y, 4);
  ASSERT_DOUBLE_EQ(v.z, 4);
}

// Вычитание двух векторов
TEST(Vector3d, Subtract)
{
  vector3d v1 = {1, 2, 3};
  vector3d v2 = {3, 2, 1};

  vector3d v = v1 - v2;

  ASSERT_DOUBLE_EQ(v.x, -2);
  ASSERT_DOUBLE_EQ(v.y, 0);
  ASSERT_DOUBLE_EQ(v.z, 2);
}

// Проверка равенства двух векторов
TEST(Vector3d, Equal)
{
  vector3d v1 = {0, 1, 0};
  vector3d v2 = {0, 1, 0};

  ASSERT_TRUE(v1 == v2);

  v1.x = -1;

  ASSERT_FALSE(v1 == v2);
}

// Проверка неравенства двух векторов
TEST(Vector3d, NotEqual)
{
  vector3d v1 = {0, 1, 0};
  vector3d v2 = {0, 1, 0};

  ASSERT_FALSE(v1 != v2);

  v1.x = -1;

  ASSERT_TRUE(v1 != v2);
}

// Скалярное произведение двух векторов
TEST(Vector3d, DotProduct)
{
  vector3d v1 = {1, 2, 3};
  vector3d v2 = {3, 2, 1};

  ASSERT_DOUBLE_EQ(v1 * v2, 10);
  ASSERT_DOUBLE_EQ(v1 * v1, v1.length()*v1.length());
}

// Умножение вектора на число
TEST(Vector3d, Multiply)
{
  vector3d v1 = {1, 2, 3};
  vector3d v2 = {3, 6, 9};

  ASSERT_EQ(v2, 3.0*v1);
  ASSERT_EQ(v2, v1*3);

  ASSERT_EQ(-v1, -1.0*v1);
}

// Вычисление длины вектора
TEST(Vector3d, Length)
{
  vector3d v1 = {0, 0, 2};
  vector3d v2 = {0, -3, 0};
  vector3d v3 = {7, -0, 0};

  ASSERT_DOUBLE_EQ(v1.length(), 2);
  ASSERT_DOUBLE_EQ(v2.length(), 3);
  ASSERT_DOUBLE_EQ(v3.length(), 7);
  ASSERT_DOUBLE_EQ((vector3d::X + vector3d::Y + vector3d::Z).length(), std::sqrt(3));
}

// Нормирование вектора
TEST(Vector3d, Normalize)
{
  vector3d v1 = {0, 0, 2};
  vector3d v2 = {0, -3, 0};
  vector3d v3 = {7, -0, 0};
  vector3d v4 = {1, 2, 3};

  v1.normalize();
  ASSERT_EQ(v1, vector3d::Z);

  v2.normalize();
  ASSERT_EQ(v2, -vector3d::Y);

  v3.normalize();
  ASSERT_EQ(v3, vector3d::X);

  v4.normalize();
  ASSERT_EQ(v4, vector3d(1/std::sqrt(14), 2/std::sqrt(14), 3/std::sqrt(14)));
}



// Векторное произведение двух векторов
TEST(Vector3d, CrossProduct)
{
  ASSERT_EQ(vector3d::X ^ vector3d::Y, vector3d::Z);
  ASSERT_EQ(vector3d::Y ^ vector3d::Z, vector3d::X);
  ASSERT_EQ(vector3d::Z ^ vector3d::X, vector3d::Y);

  ASSERT_EQ(vector3d::Y ^ vector3d::X, -vector3d::Z);
  ASSERT_EQ(vector3d::Z ^ vector3d::Y, -vector3d::X);
  ASSERT_EQ(vector3d::X ^ vector3d::Z, -vector3d::Y);

  ASSERT_EQ(vector3d::X ^ vector3d::X, vector3d::ZERO);
  ASSERT_EQ(vector3d::Y ^ vector3d::Y, vector3d::ZERO);
  ASSERT_EQ(vector3d::Z ^ vector3d::Z, vector3d::ZERO);
}


// Перегрузка оператора << для вывода
// Вектор должен выводиться в виде {X, Y, Z}

TEST(Vector3d, Output)
{
  vector3d v = {1.1, 2.2, 3.3};

  std::ostringstream out;

  out << std::setprecision(2) << v;


  ASSERT_EQ(out.str(), "{1.1, 2.2, 3.3}");

  out.str("");
  out << v << " ! " << v;

  ASSERT_EQ(out.str(), "{1.1, 2.2, 3.3} ! {1.1, 2.2, 3.3}");
}
!*/

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);

  int tmp = 5;
  Node<int> nd(tmp);
  std::cout << nd;

  return RUN_ALL_TESTS();
}