#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

 /*Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.
Instructs the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
Compares the user’s choice and the computer’s choice and determine the winner.
Informs the user who the winner is.*/

int main() {

srand (time(NULL));
 
int computer = rand() % 3 + 1;
 
int user;

cout << "====================\n";
cout << "rock paper scissors!\n";
cout << "====================\n";
 
cout << "1) Rock\n";
cout << "2) Paper\n";
cout << "3) Scissor\n";
 
cout << "shoot! ";

cin >> user;

if (user == 1)
    std::cout << "you choose: Rock\n";
  else if (user == 2)
    std::cout << "you choose: Paper\n";
  else
    std::cout << "you choose: Scissor\n";

  if (computer == 1)
    std::cout << "cpu choose: Rock\n";
  else if (computer == 2)
    std::cout << "cpu choose: Paper\n";
  else
    std::cout << "cpu choose: Scissor\n";


  if (user == computer) {

    std::cout << "it's a tie!\n";

  }

  // user rock

  else if (user == 1) {

    if (computer == 2) {

      std::cout << "you lost! booooo!\n";

    }
    if (computer == 3) {

      std::cout << "you won! woohoo!\n";

    }

  }

  // user paper

  else if (user == 2) {

    if (computer == 1) {

      std::cout << "you won! woohoo!\n";

    }
    if (computer == 3) {

      std::cout << "you lost! boo!\n";

    }

  }

  // user scissors

  else if (user == 3) {

    if (computer == 1) {

      std::cout << "you won! woohoo!\n";

    }
    if (computer == 2) {

      std::cout << "you lost! booooo!\n";

    }

  }

  return 0;


}
