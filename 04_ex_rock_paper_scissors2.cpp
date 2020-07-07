#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::vector;
using std::string;

int v1 = 1;
int v2 = 2;

int fib() {
  int s = v1+v2;
  if (s<=0) s = 1;
  v1 = v2;
  v2 = s;
  return s;
}

void generate(int seed) {
  if (seed<0) seed = -seed;
  seed %=10; // don't want a number larger than 9
  if(seed==0) return;
  for(int i=0; i<seed; ++i) fib();
}

int next_play() {
  return fib()%3; // we are only interested in a value 0, 1 or 2;
}

int main() {
  cout << "Enter an integer \"seed\" to help me play: ";
  int seed = 0;
  cin >> seed;
  generate(seed);
  int xx = next_play();

  cout << xx << "\n";
}