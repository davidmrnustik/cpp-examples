#include "./std_lib_error.h"
#include <iostream>
#include "stdlib.h"
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int print_sum(vector<int> v) {
  int sum = 0;
  for(int n: v) sum+=n;
  return sum;
}

string get_name_of_day(int i) {
  vector<string> names = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  if (i < 7) return names[i];

  return names[0];
}

int get_day_of_the_week(string d) {
  vector<vector<string>> days = {
    {"Mon", "mon", "Monday"},
    {"Tue", "tue", "Tuesday"},
    {"Wed", "wed", "Wednesday"},
    {"Thu", "thu", "Thursday"},
    {"Fri", "fri", "Friday"},
    {"Sat", "sat", "Saturday"},
    {"Sun", "sun", "Sunday"}
  };
  
  for(int i = 0; i < days.size(); ++i) {
    for(string day: days[i]) {
      if (day == d) {
        return i;
        break;
      }
    }
  }
  return -1;
}

int get_sum_of_day(vector<int> v) {
  int sum = 0;
  for(int i: v) sum+=i;
  return sum;
}

int main() {
  string day;
  int value;
  int rejected = 0;
  vector<vector<int>> days(7, vector<int>());

  while(cin >> day >> value) {
    int day_of_the_week = get_day_of_the_week(day);
    if (day_of_the_week >= 0) {
      days[day_of_the_week].push_back(value);
    } else {
      ++rejected;
    }
  }

  for(int i = 0; i < days.size(); ++i) {
    cout << "Sum for " << get_name_of_day(i) << " is " << get_sum_of_day(days[i]) << "\n";
  }

  cout << "Sum for rejected: " << rejected << "\n";

}