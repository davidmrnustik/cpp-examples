#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() {
  double total;
  vector<double> distances;

  for(double distance; cin >> distance;)
    distances.push_back(distance);
  
  for(double x: distances) total += x;
  
  cout << "Total distance: " << total << "\n";
  sort(distances.begin(), distances.end());
  cout << "The smallest distance: " << distances[0] << "\n";
  cout << "The greatest distance: " << distances[distances.size() - 1] << "\n";
  cout << "The mean distance: " << total/distances.size() << "\n";

}