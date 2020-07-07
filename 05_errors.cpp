int area(int i, int j) {
  return i * j;
}

int main() {
  // type errors
  int x0 = arena(7);
  int x1 = area(7);
  int x2 = area("seven", 2);

  // non-errors
  int x4 = area(10, -7);
  int x5 = area(10.7, 9.3);
  char x6 = area(100, 9999);

  // syntax errors
  int s1 = area(7;
  int s2 = area(7)
  Int s3 = area(7);
  int s4 = area('7);

}