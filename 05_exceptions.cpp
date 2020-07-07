#include <iostream>
using std::cout;

constexpr int frame_width = 2;

class Bad_area {};

int area(int x, int y) {
  if (x <= 0 || y <= 0) throw Bad_area{};
  return x * y;
}

int framed_area(int x, int y) {
  if (x-frame_width <= 0 || y-frame_width <= 0) throw Bad_area{};
  return area(x-frame_width, y-frame_width);
}

int main() {
  try {
    int x = area(-4, 5);
    int area2 = framed_area(3, -4);
  } catch (Bad_area) {
    cout << "Oops! bad argument to area()\n";
  }
}