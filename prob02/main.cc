// Jemin Song
// CPSC 121L-02
// 2/19/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 4-2
// If it is a pair programming lab please specify partner below.
// Partner: @ethanbui888

#include <iostream>

#include "rectangle.h"

int main() {
  int x1 = 0;
  int y1 = 0;
  std::cout << "====== Rectangle 1 ======" << std::endl;
  std::cout << "Please enter the length: ";
  std::cin >> x1;
  std::cout << "Please enter the width: ";
  std::cin >> y1;
  Rectangle rectangle1{};
  rectangle1.SetLength(x1);
  rectangle1.SetWidth(y1);
  rectangle1.Area();
  rectangle1.Perimeter();
  std::cout << "Rectangle 1 created with length " << rectangle1.GetLength()
            << " and width " << rectangle1.GetWidth();
  std::cout << "\nThe area of Rectangle 1 is: " << rectangle1.Area() << "\n";
  std::cout << "The perimeter of Rectangle 1 is: " << rectangle1.Perimeter()
            << "\n";
  std::cout << "\n====== Rectangle 2 ======" << std::endl;
  int x2 = 0;
  int y2 = 0;
  std::cout << "Please enter the length: ";
  std::cin >> x2;
  std::cout << "Please enter the width: ";
  std::cin >> y2;
  Rectangle rectangle2{};
  rectangle2.SetLength(x2);
  rectangle2.SetWidth(y2);
  rectangle2.Area();
  rectangle2.Perimeter();
  std::cout << "Rectangle 2 created with length " << rectangle2.GetLength()
            << " and width " << rectangle2.GetWidth();
  std::cout << "\nThe area of Rectangle 2 is: " << rectangle2.Area() << "\n";
  std::cout << "The perimeter of Rectangle 2 is: " << rectangle2.Perimeter()
            << "\n";
  Rectangle rectangle3 = LargestRectangleByArea(rectangle1, rectangle2);
  std::cout << "\nThe largest rectangle has a length of "
            << rectangle3.GetLength() << ", a width of "
            << rectangle3.GetWidth() << ", and an area of " << rectangle3.Area()
            << "\n";
  return 0;
}