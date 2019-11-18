#include <iostream>
#include "mazemaker.h"

std::ostream &operator<<(std::ostream &Out, const MazeMaker &Maze) {
  Out << "At: " << Creature.Row << " , " << Creature.Col << "\n";
  return Out;
}

MazeMaker(int Size) : Size(Size){
}
int main(){
  return 0;
}