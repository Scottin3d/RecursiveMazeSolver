#ifndef MAZE_H
#define MAZE_H

#include <ostream>

class MazeMaker {
public:
  friend ostream &operator<<(ostream &Out, const MazeMaker &Maze);

private:

public:
  MazeMaker(int Size);
  int Size;
};

#endif //MAZE_H