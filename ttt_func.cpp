#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <ostream>
#include "colormod.h"
std::vector<char> bloop={' ',' ',' ',' ',' ',' ',' ',' ',' '};
char turn;
int turns=1;
int square;
int plr1_wins=0;
int plr2_wins=0;
bool is_winner=false;
std::string board = "_______________________________\n|         |         |         |\n|         |         |         |\n|    1    |    2    |    3    |\n|         |         |         |\n|_________|_________|_________|\n|         |         |         |\n|         |         |         |\n|     4    |    5    |    6    |\n|         |         |         |\n|_________|_________|_________|\n|         |         |         |\n|         |         |         |\n|    7    |    8    |    9    |\n|         |         |         |\n|_________|_________|_________|\n";
std::string new_board=board="_______________________________\n|         |         |         |\n|         |         |         |\n|    1    |    2    |    3    |\n|         |         |         |\n|_________|_________|_________|\n|         |         |         |\n|         |         |         |\n|    4    |    5    |    6    |\n|         |         |         |\n|_________|_________|_________|\n|         |         |         |\n|         |         |         |\n|    7    |    8    |    9    |\n|         |         |         |\n|_________|_________|_________|\n";

void print_takky(){

std::cout << "_______________________________\n";
std::cout << "|         |         |         |\n";
std::cout << "|         |         |         |\n";
std::cout << "|" << bloop[0] << "   1    |" << bloop[1] << "   2    |" << bloop[2] << "   3    |\n";
std::cout << "|         |         |         |\n";
std::cout << "|_________|_________|_________|\n";
std::cout << "|         |         |         |\n";
std::cout << "|         |         |         |\n";
std::cout << "|" << bloop[3] << "   4    |" << bloop[4] << "   5    |" << bloop[5] << "   6    |\n";
std::cout << "|         |         |         |\n";
std::cout << "|_________|_________|_________|\n";
std::cout << "|         |         |         |\n";
std::cout << "|         |         |         |\n";
std::cout << "|" << bloop[6] << "   7    |" << bloop[7] << "   8    |" << bloop[8] << "   9    |\n";
std::cout << "|         |         |         |\n";
std::cout << "|_________|_________|_________|\n";
}

void take_turn(){
if (turns==1 || turns % 2!=0){
std::cout << "\n            PLAYER 1 \n\n"; 
turn='X';
}
else if (turns % 2==0) {
std::cout << "\n            PLAYER 2 \n\n";
turn='O';
}
std::cout << "SELECT YOUR SQUARE: ";
std::cin >> square;
//std::cout << "\nX OR O: ";
//std::cin >> turn;
std::cout << "\n";
//bloop[square-1]=turn;
//std::replace(board.begin(), board.end(), square, turn);

switch (square){

  
  case 1:
  board=new_board;
  std::replace(new_board.begin(), new_board.end(), '1', turn);
  bloop[0]=turn;
  turns++;
  break;

  case 2:
  board=new_board;
  std::replace(new_board.begin(), new_board.end(), '2', turn);
  bloop[1]=turn;
  turns++;
  break;

  case 3:
  board=new_board;
  std::replace(new_board.begin(), new_board.end(), '3', turn);
  bloop[2]=turn;
  turns++;
  break;

  case 4:
  board=new_board;
  std::replace(new_board.begin(), new_board.end(), '4', turn);
  bloop[3]=turn;
  turns++;
  break;

  case 5:
  board=new_board;
  std::replace(new_board.begin(), new_board.end(), '5', turn);
  bloop[4]=turn;
  turns++;
  break;

  case 6:
  board=new_board;
  std::replace(new_board.begin(), new_board.end(), '6', turn);
  bloop[5]=turn;
  turns++;
  break;

  case 7:
  board=new_board;
  std::replace(new_board.begin(), new_board.end(), '7', turn);
  bloop[6]=turn;
  turns++;
  break;

  case 8:
  board=new_board;
  std::replace(new_board.begin(), new_board.end(), '8', turn);
  bloop[7]=turn;
  turns++;
  break;

  case 9:
  board=new_board;
  std::replace(new_board.begin(), new_board.end(), '9', turn);
  bloop[8]=turn;
  turns++;
  break;

  default:
  std::cout << "\nINVALID CHOICE\n";
  break;

}

}

void print_board(){
std::cout << new_board;
}

void check_for_winner(){
  if (bloop[0]=='X' && bloop[1]=='X' && bloop[2]=='X'){
    std::cout << "\nPLAYER 1 WINS\n";
    is_winner=true;
    plr1_wins++;
  }
  else if (bloop[0]=='O' && bloop[1]=='O' && bloop[2]=='O'){
    std::cout << "\nPLAYER 2 WINS\n";
    is_winner=true;
    plr2_wins++;
  }
  else if (bloop[0]=='O' && bloop[3]=='O' && bloop[6]=='O'){
    std::cout << "\nPLAYER 2 WINS\n";
    is_winner=true;
    plr2_wins++;
  }
  else if (bloop[0]=='X' && bloop[3]=='X' && bloop[6]=='X'){
    std::cout << "\nPLAYER 1 WINS\n";
    is_winner=true;
    plr1_wins++;
  }
  else if (bloop[3]=='X' && bloop[4]=='X' && bloop[5]=='X'){
    std::cout << "\nPLAYER 1 WINS\n";
    is_winner=true;
    plr1_wins++;
  }
  else if (bloop[3]=='O' && bloop[4]=='O' && bloop[5]=='O'){
    std::cout << "\nPLAYER 2 WINS\n";
    is_winner=true;
    plr2_wins++;
  }
  else if (bloop[6]=='O' && bloop[7]=='O' && bloop[8]=='O'){
    std::cout << "\nPLAYER 2 WINS\n";
    is_winner=true;
    plr2_wins++;
  }
  else if (bloop[6]=='X' && bloop[7]=='X' && bloop[8]=='X'){
    std::cout << "\nPLAYER 1 WINS\n";
    is_winner=true;
    plr1_wins++;
  }
  else if (bloop[1]=='X' && bloop[4]=='X' && bloop[7]=='X'){
    std::cout << "\nPLAYER 1 WINS\n";
    is_winner=true;
    plr1_wins++;
  }
  else if (bloop[1]=='O' && bloop[4]=='O' && bloop[7]=='O'){
    std::cout << "\nPLAYER 2 WINS\n";
    is_winner=true;
    plr2_wins++;
  }
  else if (bloop[2]=='O' && bloop[5]=='O' && bloop[8]=='O'){
    std::cout << "\nPLAYER 2 WINS\n";
    is_winner=true;
    plr2_wins++;
  }
  else if (bloop[2]=='X' && bloop[5]=='X' && bloop[8]=='X'){
    std::cout << "\nPLAYER 1 WINS\n";
    is_winner=true;
    plr1_wins++;
  }
  else if (bloop[0]=='O' && bloop[4]=='O' && bloop[8]=='O'){
    std::cout << "\nPLAYER 2 WINS\n";
    is_winner=true;
    plr2_wins++;
  }
  else if (bloop[0]=='X' && bloop[4]=='X' && bloop[8]=='X'){
    std::cout << "\nPLAYER 1 WINS\n";
    is_winner=true;
    plr1_wins++;
  }
  else if (bloop[2]=='O' && bloop[4]=='O' && bloop[6]=='O'){
    std::cout << "\nPLAYER 2 WINS\n";
    is_winner=true;
    plr2_wins++;
  }
  else if (bloop[2]=='X' && bloop[4]=='X' && bloop[6]=='X'){
    std::cout << "\nPLAYER 1 WINS\n";
    is_winner=true;
    plr1_wins++;
  
  }
  else 
  {if (bloop[0]=='X' || bloop[0]=='O'){
    if (bloop[1]=='X' || bloop[1]=='O'){
      if (bloop[2]=='X' || bloop[2]=='O'){
        if (bloop[3]=='X' || bloop[3]=='O'){
          if (bloop[4]=='X' || bloop[4]=='O'){
            if (bloop[5]=='X' || bloop[5]=='O'){
              if (bloop[6]=='X' || bloop[6]=='O'){
                if (bloop[7]=='X' || bloop[7]=='O'){
                  if (bloop[8]=='X' || bloop[8]=='O'){
                    std::cout << "\nTIE!\n";
                    is_winner=true;
                  }
                }
              }

            }
          }
      }
    }
    }
  }
  }
}
