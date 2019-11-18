//
// Created by Yusuf Pisan on 4/18/18.
// Edited by Scott Shirley 0760484 24Oct2019
//

#include "creature.h"
#include "maze.h"
#include <iostream>

//test maze provided
void test() {
    Maze M("maze.txt");
    // cout << m << endl;
    Creature C(4, 4);
    cout << "Path: " << C.solve(M) << endl;
    cout << M << endl;
}

//test alt maze provided
void test2() {
    Maze M("maze1.txt");
    // cout << m << endl;
    Creature C(4, 4);
    cout << "\n" << "Path: " << C.solve(M) << "\n\n";
}

//test big boi maze
void test3() {
    Maze M("maze2.txt");
    // cout << m << endl;
    Creature C(19, 5);
    cout << "Path: " << C.solve(M) << endl;
    cout << M << endl;
}

int main() {
    test();
    test2();
    test3();
    cout << "Done!" << std::endl;
    return 0;
}