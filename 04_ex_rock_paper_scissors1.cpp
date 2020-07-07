#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::vector;
using std::string;

vector<char> options = {'r', 's', 'p', 'p', 'r', 'p', 's', 'p', 's', 'r', 'p', 'r', 's', 's', 'r', 's'};
vector<vector<char>> matrix = {
  {'r', 'p', 'p'},
  {'r', 's', 'r'}, 
  {'p', 'r', 'p'},
  {'p', 's', 's'},
  {'s', 'r', 'r'},
  {'s', 'p', 's'}
};
vector<string> spelledOptions = {"rock", "paper", "scissors"};
constexpr char rock = 'r';
constexpr char paper = 'p';
constexpr char scissors = 's';

void getSpelledOption(char option, string player) {
  switch(option) {
    case 'r': cout << player << " choice is: " << spelledOptions[0] << "\n"; break;
    case 'p': cout << player << " choice is: " << spelledOptions[1] << "\n"; break;
    default: cout << player << " choice is: " << spelledOptions[2] << "\n"; break;
  }
}

/*
|U:C| R | P | S |
| R | X | P | R |
| P | P | X | S |
| S | R | S | X |
*/

int main() {
  char user;
  int i = 0;
  int userScore = 0;
  int computerScore = 0;
  
  cout << "Choose from those options: (r) rock, (p) paper, (s) scissors.\n";

  while(cin >> user && i < options.size()) {
    
    if (user == 'r' || user == 'p' || user == 's') {
      char computer = options[i];
      ++i;
      getSpelledOption(user, "User");
      getSpelledOption(computer, "Computer");
      char winner;
      
      for(vector<char> v: matrix) {
        if (v[0] == user && v[1] == computer) {
          winner = v[2];
        }
      }

      if (winner == user) {
        cout << "You won!\n";
        ++userScore;
      } else if (winner == computer) {
        cout << "You lose.\n";
        ++computerScore;
      } else {
        cout << "Draw game, play again.\n";
      }
      winner = '-';
    } else {
      cout << "You enter wrong type. Try again.\n";
    }
  }

  cout << "Game finished:\n";
  cout << "User has " << userScore << "\n";
  cout << "Computer has " << computerScore << "\n";

  if (userScore > computerScore) {
    cout << "You win the game! Congratulations!\n";
  } else if (userScore < computerScore) {
    cout << "You lose the game! Try play again!\n";
  } else {
    cout << "The game is drawn.\n";
  }
}