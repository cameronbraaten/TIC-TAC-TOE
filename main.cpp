#include <iostream>
#include <vector>
#include "ttt.hpp"

int main(){
std::cout << "          TIC-TAC-TOE\n";
print_takky();

//bool is_winner=false;
/*if (plr1_wins==3){
  std::cout << "\nPLAYER 1 WINS: " << plr1_wins << "\nPLAYER 2 WINS: " << plr2_wins;
  return 0;
}

else if (plr2_wins==3){
  std::cout << "\nPLAYER 1 WINS: " << plr1_wins << "\nPLAYER 2 WINS: " << plr2_wins;
  return 0;
}
*/

while (is_winner==false){
take_turn();
check_for_winner();
print_board();
}

//std::cout << "\nPLAYER 1 WINS: " << plr1_wins << "\nPLAYER 2 WINS: " << plr2_wins;

std::cout << "\nTHANKS FOR PLAYING!\n";
}

