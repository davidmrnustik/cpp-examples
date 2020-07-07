#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main() {
  cout << "Please enter your first name and age:\n";
  string first_name;
  float age;
  cin >> first_name;
  cin >> age;
  cout << "Hello, " << first_name << ". I'm " << age * 12 << " months old." << "\n";

  cout << "Please enter you first and second names\n";
  string firstName;
  string secondName;
  cin >> firstName >> secondName;
  cout << "Hello, " << firstName << " " << secondName << "\n";
  string fullName = firstName + " " + secondName;

  if (firstName == secondName) cout << "that's the same name twice\n";
  if (firstName < secondName)
    cout << firstName << " is alphabetically before " << secondName << "\n";

  if (firstName > secondName)
    cout << firstName << " is alphabetically after " << secondName << "\n";

  return 0;
}