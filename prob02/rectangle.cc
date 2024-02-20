// Jemin Song
// CPSC 121L-02
// 2/19/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 4-2
// If it is a pair programming lab please specify partner below.
// Partner: @ethanbui888

#include "rectangle.h"

unsigned int Rectangle::Area() const {
  return length_ * width_;
}

unsigned int Rectangle::Perimeter() const {
  return length_ + width_ + length_ + width_;
}

Rectangle LargestRectangleByArea(const Rectangle &r1, const Rectangle &r2) {
  if (r1.Area() < r2.Area()) {
    return r2;
  }
  return r1;
}
