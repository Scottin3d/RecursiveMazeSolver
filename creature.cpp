//
// Created by Yusuf Pisan on 4/18/18.
// Edited by Scott Shirley 0760484 24Oct2019
//
#include "creature.h"
#include <algorithm>
#include <iostream>


std::ostream &operator<<(std::ostream &Out, const Creature &Creature) {
  Out << "At: " << Creature.Row << " , " << Creature.Col << "\n";
  return Out;
}

Creature::Creature(int Row, int Col) : Row(Row), Col(Col){
  //CurrentPosition[0] = Row;
  //CurrentPosition[1] = Col;
  Path = "";
}

bool Creature::atExit(const Maze &Maze) const {
  return (Maze.getExitColumn() == Col && Maze.getExitRow() == Row);
}

std::string Creature::solve(Maze &Maze) {
  if(!findPath(Row, Col, Maze)){
    return "No Solution.";
  }else{
    std::reverse(Path.begin(), Path.end());
    return Path;
  }
}

//helper function/ true recursion
bool Creature::findPath(int PathRow, int PathCol, Maze &Maze){
  //at exit?
  if(PathRow == Maze.getExitRow() && PathCol == Maze.getExitColumn()){
    return true;
  }

  //is clear?
  if(!Maze.isClear(PathRow, PathCol)){
    return false;
  }

  //mark path
  Maze.markAsPath(PathRow, PathCol);
  
  //north
  if(findPath(PathRow - 1, PathCol, Maze)){
    Path += goNorth(Maze);
    return true;
  }

  //east
  if(findPath(PathRow, PathCol + 1, Maze)){
    Path += goEast(Maze);
    return true;
  }

  //south
  if(findPath(PathRow + 1, PathCol, Maze)){
    Path += goSouth(Maze);
    return true;
  }
  //west
  if(findPath(PathRow, PathCol - 1, Maze)){
    Path += goWest(Maze);    
    return true;
  }

  //all directions failed, mark visited
  Maze.markAsVisited(PathRow, PathCol);

  //all directions failed return false
  return false;
}

//north Row - 1, Col
std::string Creature::goNorth(Maze &Maze) {
  if(Maze.isPath(Row, Col)){
    return "N";
  }
  return "X";
}

//west Row, Col -1
std::string Creature::goWest(Maze &Maze) {
  if(Maze.isPath(Row, Col)){
    return "W";
  }
  return "X";
}

//East Row, Col + 1
std::string Creature::goEast(Maze &Maze) {
  if(Maze.isPath(Row, Col)){
    return "E";
  }
  return "X";
}

//South Row + 1, Col
std::string Creature::goSouth(Maze &Maze) {
  if(Maze.isPath(Row, Col)){
    return "S";
  }
  return "X";
}