//
// Created by Yusuf Pisan on 4/18/18.
// Edited by Scott Shirley 0760484 24Oct2019
//

#ifndef ASS3_CREATURE_H
#define ASS3_CREATURE_H

#include "maze.h"
#include <ostream>

class Creature {
public:
  friend ostream &operator<<(ostream &Out, const Creature &Creature);

private:
  std::string Path;
  int Row;
  int Col;

public:
  Creature(int Row, int Col);
  std::string solve(Maze &Maze);
  bool findPath(int Row, int Col, Maze &Maze);
  bool atExit(const Maze &Maze) const;
  std::string goNorth(Maze &Maze);
  std::string goSouth(Maze &Maze);
  std::string goEast(Maze &Maze);
  std::string goWest(Maze &Maze);
};

#endif //ASS3_CREATURE_H
