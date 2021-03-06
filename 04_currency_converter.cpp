#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main() {
  constexpr double kroner_to_dollar = 6.91460;
  constexpr double eur_to_dollar = 0.92684;
  constexpr double pounds_to_dollar = 0.80814;
  constexpr double yen_to_dollar = 106.287;

  double length = 1;
  char currency = 0;

  cout << "Enter amount and currency (y - yen, e - eur, p - british pound, k - kroner):\n";
  cin >> length >> currency;

  if (currency == 'y') {
    cout << length << currency << " = " << length / yen_to_dollar << " dollars" << "\n";
  } else if (currency == 'e') {
    cout << length << currency << " = " << length / eur_to_dollar << " dollars" << "\n";
  } else if (currency == 'p') {
    cout << length << currency << " = " << length / pounds_to_dollar << " dollars" << "\n";
  } else if (currency == 'k') {
    cout << length << currency << " = " << length / kroner_to_dollar << " dollars" << "\n";
  } else {
    cout << "Wrong currency! Please try again!\n";
  }

  return 0;
}