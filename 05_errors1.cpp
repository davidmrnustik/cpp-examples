#include "./std_lib_error.h"

constexpr int frame_width = 2;

int area(int x, int y) {
  if (x <= 0 || y <= 0) error("non-positive area() argument");
  return x * y;
}

int framed_area(int x, int y) {
  if (x-frame_width <= 0 || y-frame_width <= 0) error("non-positive area() argument called by framed_area");
  return area(x-frame_width, y-frame_width);
}

int f(int x, int y, int z) {
  int area1 = area(x, y);
  if (area1<=0) error("non-positive area");
  int area2 = framed_area(3, z);
  int area3 = framed_area(y, z);
  double ratio = double(area1)/area3;

  cout << "area1: " << area1 << "\n";
  cout << "area2: " << area2 << "\n";
  cout << "area3: " << area3 << "\n";
  cout << "ratio: " << ratio << "\n";

  return ratio;
}

int main () {
  int x = f(3, 3, 4);
  cout << x << "\n";
}