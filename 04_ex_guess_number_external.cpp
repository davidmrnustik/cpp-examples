#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
 char answer;
 int guess = 50;
 int questions = 0;

  vector<int> dif(6);
 dif[0] = 25;
 dif[1] = 13;
 dif[2] = 6;
 dif[3] = 3;
 dif[4] = 2;
 dif[5] = 1;

  cout << "Lets play a game...\n" << endl;
 cout << "Think of a number between 1 and 100. \n";
 cout << "c = correct  l = lower   h = higher\n";
 cout << "Is it 50?\n";

  while (cin >> answer)
 {
  ++questions;
  
  if (answer == 'c')
  {
   cout << "Knew it! Thanks for playing!\n";
   {
    if (questions == 1)
    {
     cout << "It took me " << questions << " question to guess your number!\n";
     cout << "Please press ctrl + z and then enter to exit.\n";
    }
    else
    {
     cout << "It took me " << questions << " questions to guess your number!\n";
     cout << "Please press ctrl + z and then enter to exit.\n";
    }
   }
  }

   else
  {
   {
    if (answer == 'l' && questions <= dif.size())
     guess -= dif[questions - 1]; 
   }

    {
    if (answer == 'h' && questions <= dif.size())
    guess += dif[questions - 1];

    }

    {
    if (answer != 'l' && answer != 'h' && answer != 'c')
    {
     cout << "Sorry, that's not a valid answer. Use l (lower), h (higher) or c (correct)\n";
     --questions;
    }
   }
   cout << "\nIs it: " << guess << '\n';
  }
 }

  return 0;
}