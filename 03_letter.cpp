#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::cerr;
using std::string;

int main() {
  string first_name;
  
  cout << "Enter the name od the person you want to write to: ";
  cin >> first_name;

  cout << "Dear " << first_name << ",\n";
  cout << "\tHow are you I am fine. I miss you.\n";

  string friend_name;
  cin >> friend_name;
  cout << "Have you seen " << friend_name << " lately?\n";

  char friend_sex = 0;

  cin >> friend_sex;

  if (friend_sex == 'm') {
    cout << "If you see " << friend_name << " please ask him to call me\n";
  } else {
    cout << "If you see " << friend_name << " please ask her to call me\n";
  }

  int age;
  cin >> age;
  cout << "I hear you just had a birthday and you age " << age << " years old.\n";

  if (age <= 0 || age >= 110) {
    cerr << "You are kidding!!\n";
    exit(1);
  }

  if (age < 12) {
    cout << "Next year you will be " << age + 1 << "\n";
  }

  if (age == 17) {
    cout << "Next year you will be able to vote.\n";
  }

  if (age > 70) {
    cout << "I hope you are enjoying retirement.\n";
  }

  cout << "Yours sincerely,\n\n" << "David" << "\n";
}