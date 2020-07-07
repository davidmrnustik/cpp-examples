#include "./std_lib_error.h"
#include <iostream>
#include "stdlib.h"
#include <vector>
using std::cin;
using std::cout;
using std::vector;

vector<int> bulls_cows(vector<int> guess, vector<int> numbers) {
  vector<int> v;
  int bull = 0;
  int cow = 0;

  for(int g = 0; g < guess.size(); ++g) {
    for(int n = 0; n < numbers.size(); ++n) {
      if (g == n && guess[g] == numbers[n]) {
        ++bull;
      } else if (guess[g] == numbers[n]) {
        ++cow;
      }
    }
  }
  v.push_back(bull);
  v.push_back(cow);
  return v;
}

bool random_number_exists(vector<int> numbers, int random) {
  bool exist = false;
  for(int n: numbers) {
    if (n == random) {
      exist = true;
      break;
    }
  }
  return exist;
}

vector<int> random_numbers() {
  vector<int> v{};
  int random_number;
  int i = 0;
  while(i < 4) {
    random_number = rand() % 10;
    if (v.size() > 0) {
      if (!random_number_exists(v, random_number)){
        v.push_back(random_number);
        ++i;
      }
    } else {
      v.push_back(random_number);
      ++i;
    }
  }
  return v;
}

vector<int> strToVector(string s) {
  vector<int> v;
  for(char c: s) {
    if (c >= '0' && c <= '9') {
      v.push_back(c - '0');
    } else {
      error("You must enter digit");
    }
  }
  if(v.size() != 4) {
    error("You must enter 4 numbers");
  }

  return v;
}

int main() {
  try {
    srand (time(NULL));
    vector<int> numbers = random_numbers();
    for(int i: numbers) cout << i << " ";
    cout << "\n";
    string input;

    cout << "Enter you guess (4 numbers): ";

    while(cin >> input) {
      vector<int> guess;

      try {
        guess = strToVector(input);
      } catch(exception& e) {
        cout << e.what() << "\n";
      }

      vector<int> bc = bulls_cows(guess, numbers);
      int bulls = bc[0];
      int cows = bc[1];
      cout << bulls << " bull and " << cows << " cow\n";

      if (bulls == 4) {
        cout << "Great, your guess is correct!\n";
        break;
      } else {
        cout << "Enter you guess again (4 numbers): ";
      }
    }
  } catch(runtime_error e) {
    cout << e.what() << "\n";
  }
}